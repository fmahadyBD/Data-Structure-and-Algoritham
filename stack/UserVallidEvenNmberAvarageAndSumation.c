#include<stdio.h>
int main(){
int a[6],avarage=0;
printf("Enter the Even number:\n");
for(int i=0;i<6;i++){
    scanf("%d",&a[i]);
    avarage=avarage+a[i];
}
printf("The Avarage is: %d",avarage/6);


}