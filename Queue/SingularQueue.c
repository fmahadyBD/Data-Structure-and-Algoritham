#include <stdio.h>
#include <stdlib.h>
#define MAX 10 


int front = -1, rear = -1, circQueue[MAX];


void enqueue(){
   int num;
   printf("Enter the number to be inserted: ");
   scanf("%d", &num);


   if(rear == MAX-1){
      printf("Overflow");
   }

   else if(front == -1 && rear == -1){
      front = 0;
      rear = 0;
   }
  
   else if(rear == MAX - 1 && front != 0){
      rear = 0;
   }
   else {
      rear += 1;
   }

   circQueue[rear] = num;
}


void dequeue(){

   if(front == -1){
      printf("Underflow");
   }

   else if(front == rear){
      front = -1;
      rear = -1;
   }

   else if(front == MAX - 1){
      front = 0;
   }
   else {
      front += 1;
   }
}

void display(){
    int i;
    if(front == -1 || rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else {
       printf("The queue is: ");
       for (i = front; i <= rear; i++){
       printf("%d ", circQueue[i]);
    }
    printf("\n");
  }
}

int main()
{
  
    int choice;
    while(1){
        printf("Enter your choice: \n1. Enqueue \n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &choice);

    switch(choice){
       case 1:
          enqueue(); 
          break;
       case 2:
          dequeue(); 
          break;
       case 3:
          display(); 
          break;
       case 4:
          return 0;  
       default:
          printf("Enter valid choice");
          break;
       }
    }
    return 0;
}

