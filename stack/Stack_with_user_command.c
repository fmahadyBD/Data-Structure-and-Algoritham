#include<stdio.h>
int stack[10];
int top=-1;
int max;

int push(){
if(top==max){
    return 0;
}else{
    top++;
    printf("Enter the element that you want to push:\n");
    scanf("%d",&stack[top]);
    printf("your %d is succssfully Addede\n",stack[top]);


}
}
int pop(){
    if(top==-1){
        printf("There is no element to pop\n");
    }

}
int show(){
    if(top==-1){
        printf("No element found\n");
        return 0;
    }else{
printf("Your Stacck is:\n");
for(int i=0;i<=top;i++){
    printf("%d\n",stack[i]);
}
    }
}
int main(){
int d;
printf("Enter your Stack Size:");
scanf("%d",&max);
while (1)
{

printf("\nEnter 1 for pop\nEnter 2 for push\nEnter 3 for show\n");
scanf("%d",&d);
switch (d)
{
case 1:
  pop();
    break;
case 2:
  push();
    break;
case 3:
  show();
    break;

default:
    break;
}
}


}