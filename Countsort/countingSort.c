
#include <stdio.h>

int main()
{

    int max = 0;
    int j;
    int size;

    printf("Enter the array size: \n");

    scanf("%d", &size);
    int a[size];
    int b[size];
    printf("Enter the array Element:\n");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &a[i]);
    }



    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    int c[max + 1];

    for (int i = 0; i < max; i++)
    {

        c[i] = 0;
    }

    for (int i = 0; i < size ; i++)
    {

        int temp = a[i];
        c[temp] = c[temp] + 1;
 
    }
 

    printf("The result of counting sort: \n");

    for (int i = 0; i <= max; i++)
    {

        if (c[i] != 0)
        {

            while (c[i] != 0)
            {
                printf("%d ", i);
                --c[i];
            }
        }
    }
}
