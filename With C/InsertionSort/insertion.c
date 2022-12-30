#include<stdio.h>
int main(){
    int a[5]={1,5,7,2,3};
    int i,value,hole;
    for(i=1;i<5;i++){
        value=a[i];
        hole=i;
        while (hole>0&& a[hole-1]>value)
        {
           a[hole]=a[hole-1];
           hole--;
        }
        a[hole]=value;
        
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}