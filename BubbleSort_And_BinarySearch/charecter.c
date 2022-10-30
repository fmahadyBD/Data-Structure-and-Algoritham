#include<stdio.h>
#include<string.h>
int main(){

    char a[50];
    char b;

    gets(a);
    int k=0,i;
    printf("Enter the string for search:\n");
    scanf("%c",&b);

    for ( i = 0; i < strlen(a); i++)
    {
        if(a[i]==b){
            printf("hay Found at: %d and index %d ",i+1,i);
            k++;
            return 0;
           
        }
    }
    if(k==0){
        printf("Sorry Not found");
    }
    



}