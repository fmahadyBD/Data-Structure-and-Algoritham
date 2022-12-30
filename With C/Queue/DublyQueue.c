
#include<stdio.h>
#include<stdlib.h>
struct deque
{
    int front;
    int rear;
    int capacity;
    int *arr;

};
void clear_screen()
{
    #ifdef _WIN32
        system("cls");
    #elif __unix__
        system("clear");
    #else
        printf("clear screen not supported\n");
    #endif
}
struct deque* create_dequeue(int cap)
{
 struct deque *array;
 array=(struct deque*)malloc(sizeof(struct deque));
 array->capacity=cap;
 array->front=-1;
 array->rear=-1;
 array->arr=(int*)malloc(sizeof(int)*cap);
 return(array);
}
void insertion_front(struct deque *array,int data)
{
if(array->rear+1==array->front||array->rear==array->capacity-1&&array->front==0)
    printf("queue is full");
    else if(array->front==-1)
    {
        array->front=0;
        array->rear=0;
        array->arr[array->front]=data;
    }
    else if(array->front==0)
{
 array->front=array->capacity-1;
array->arr[array->front]=data;
}
else
{
    array->front--;
    array->arr[array->front]=data;
}
}
void insertion_rear(struct deque *array,int data)
{
    if(array->rear==array->capacity-1&&array->front==0||array->rear+1==array->front)
    printf("queue is full");
else if(array->rear==-1)
	{
	    array->rear++;
	    array->arr[array->rear]=data;
	    array->front=array->rear;
	}
	else if(array->rear==array->capacity-1&&array->front!=0)
	{
	    array->rear=0;
	    array->arr[array->rear]=data;
	}
	
	else
	{
	    array->rear++;
	    array->arr[array->rear]=data;
	}

}
void deletion_front(struct deque *array)
{
  
    if(array->front==-1)
	printf("queue is empty");
    else
    {

    printf("deleted value is %d",array->arr[array->front]);

	if(array->front==array->rear)
	{
	    array->front=-1;
	    array->rear=-1;
	}

	else if(array->front==array->capacity-1)
	    array->front=0;

	else
	    array->front++;


 }
}

void deletion_rear(struct deque *array)
{
  
    if(array->rear==-1)
      printf("queue is empty");
      else
      { printf("deleted value is %d",array->arr[array->rear]);
 
          if(array->rear==array->front)
          {
        array->front=-1;
	    array->rear=-1;
          }
       
          else if(array->rear==0)
            array->rear=array->capacity-1;
           else
            array->rear--;
      }
}

int menu(void)
{
    int choice;
    printf("\n1: Insertion at Front");
    printf("\n2: Insertion at Rear");
    printf("\n3: Deletion at Front");
    printf("\n4: Deletion at Rear");
    printf("\n5: exit");
    printf("\n\n enter your choice");
    scanf("%d",&choice);
    return(choice);
}
// driver code
int main()
{
    struct deque *array;
    int cap,data;
    printf("enter the capacity");
    scanf("%d",&cap);
    array=create_dequeue(cap);
    while(1)
    { clear_screen();
        switch(menu())
        {
        case 1:
            printf("enter value");
            scanf("%d",&data);
            insertion_front(array,data);
            break;
        case 2:
            printf("enter value ");
            scanf("%d",&data);
            insertion_rear(array,data);
            break;
        case 3:
            deletion_front(array);
            break;
        case 4:
            deletion_rear(array);
            break;
        case 5:
            exit(0);
        }

    }
return 0;

}
e complexity:O(n)

*/
