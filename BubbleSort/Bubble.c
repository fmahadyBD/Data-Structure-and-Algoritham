#include <stdio.h>
int main()
{
    int a[5] = {1, 5, 7, 2, 3};
    int i, j, tem;
    for (i = 1; i < 5; i++)
    {
        for (j = 0; j < 5 - i; j++)
        {
            /*
            what is the different Between Selection Sort And Bubble sort?
            ans:
            1.In bubble sort, two adjacent elements are compared  If the adjacent elements are not
            at the correct position, swapping would be performed.
            
            2.In selection sort, the minimum element is selected from the array and
            swap with an element which is at the beginning of the unsorted sub array.
 
            */
            if (a[j] > a[j + 1])
            {
                tem = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tem;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}