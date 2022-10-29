#include <stdio.h>

int top = -1;
int stack[10];

void push(int x)
{
    if (top < 10 - 1)
    {
        top++;
        stack[top] = x;
        printf("Successfully added!\n");
    }
    else
        ("Sorry Excption erro!\n");
}
int pop()
{
    if (top >= 0)
    {
        top--;
        printf("Succcessfully pop or deleted! \n");
    }
    else
    {
        printf("Sorry No element for pop or deleted:\n");

        return -1;
    }
}
int peek()
{
    if (top >= 0)
    {
        printf("The pick: %d\n", stack[top]);
    }
    else
    {
        printf("Sorry No element for peek:\n");
        return -1;
    }
}

int main()
{
    push(0);
    peek();
    push(10);
    pop(10);
    push(20);
    peek();
    push(30);
}