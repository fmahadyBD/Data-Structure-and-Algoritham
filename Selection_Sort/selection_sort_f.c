#include<stdio.h>
int main(){

int a[]={-2,-5,3,6,1,8,-9};
int i,j,temp;
for(i=0;i<7;i++){
    for(j=i+1;j<7;j++){
        if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
  for (i = 0; i < 7; i++)
    {
        printf("%d ", a[i]);
    }


}