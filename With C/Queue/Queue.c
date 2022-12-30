#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define a structure to represent a queue
typedef struct {
  int data[MAX_SIZE]; // Array to store the queue elements
  int front; // Index of the front element of the queue
  int rear; // Index of the rear element of the queue
  int size; // Number of elements in the queue
} Queue;

// Function prototypes
void enqueue(Queue *queue, int element);
int dequeue(Queue *queue);
int is_empty(Queue *queue);
int is_full(Queue *queue);

int main() {
  Queue queue;

  // Initialize the queue
  queue.front = 0;
  queue.rear = -1;
  queue.size = 0;

  // Enqueue some elements
  enqueue(&queue, 1);
  enqueue(&queue, 2);
  enqueue(&queue, 3);

  // Dequeue an element
  int element = dequeue(&queue);
  printf("Dequeued element: %d\n", element);

  // Check if the queue is empty
  if (is_empty(&queue)) {
    printf("Queue is empty\n");
  } else {
    printf("Queue is not empty\n");
  }

  return 0;
}

// Function to add an element to the queue
void enqueue(Queue *queue, int element) {
  if (is_full(queue)) {
    printf("Queue is full, cannot enqueue\n");
    return;
  }

  // Increment the rear index and add the element
  queue->rear = (queue->rear + 1) % MAX_SIZE;
  queue->data[queue->rear] = element;
  queue->size++;
}

// Function to remove an element from the queue
int dequeue(Queue *queue) {
  if (is_empty(queue)) {
    printf("Queue is empty, cannot dequeue\n");
    return -1;
  }

  // Store the front element and increment the front index
  int element = queue->data[queue->front];
  queue->front = (queue->front + 1) % MAX_SIZE;
  queue->size--;

  return element;
}

// Function to check if the queue is empty
int is_empty(Queue *queue) {
  return queue->size == 0;
}

// Function to check if the queue is full
int is_full(Queue *queue) {
  return queue->size == MAX_SIZE;
}
