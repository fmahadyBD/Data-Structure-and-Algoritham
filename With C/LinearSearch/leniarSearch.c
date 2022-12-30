#include <stdio.h>
int main()
{
    int arr[6] = {3, 5, 3, 1, 27, 8};
    int i, a,c=0;
     printf("Seach the element: ");
    scanf("%d", &a);
    for (i = 0; i < 6; i++)
    {
        if (arr[i] == a)
        {
             printf("Succesfuly find it!");
            return 0;
        }
        else
        {
           c++;// c is a counter.. we can take i for it also..
        }
    }
    if(c>=6){
         printf("Sorry not found");
    }
}
