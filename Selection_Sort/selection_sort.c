#include <stdio.h>
int main()
{

    int a[] = {2, 4, 1, 6, 3, 7, 0};
    int i, j, min_index, tem;

    for (i = 0; i < 6; i++)
    {
        min_index = i;

        for (j = i + 1; j < 6; j++)
        {
            if (a[j] < a[min_index])
            {
                min_index = j;
               // printf("%d  ",j);
            }
            tem = a[j];
            a[i] = a[min_index];
            a[min_index] = tem;
        }
    }
    for (i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
}