#include <stdio.h>
int main()
{

    int a[] = {6, 4, 8, 3, 1};
    int i, j, tem;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {

            if (a[i] > a[j])
            {

                tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}