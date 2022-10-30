#include <stdio.h>

int main()
{
    int aa[100];
    int n, i, j, f, k, b = 0, t, x = 0, tem;

    int s = 0, e, mid;
    printf("Enter the range:\n");
    scanf("%d", &n);
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the Array Element of %d \n", i);
        scanf("%d", &aa[i]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            if (aa[j] > aa[j + 1])
            {
                tem = aa[j];
                aa[j] = aa[j + 1];
                aa[j + 1] = tem;
            }
        }
    }

    printf("Target for search: :\n");
    scanf("%d", &t);

    while (s <= n)
    {

        mid = (s + n) / 2;
        if (aa[mid] == t)
        {
            printf("Matched index %d", mid);
            return 0;
        }
        else if (aa[mid] < t)
        {
            s = mid + 1;
        }
        else if (aa[mid] > t)
        {
            n = mid - 1;
        }
    }
    x++;
    if (x > 0)
    {
        printf("hay man,, this element Not found");
    }

    return 0;
}