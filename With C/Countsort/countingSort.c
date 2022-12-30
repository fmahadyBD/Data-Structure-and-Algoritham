
#include <stdio.h>

int main()
{

    int max = 0;
    int j;
    int size;

    printf("Enter the array size: \n");

    scanf("%d", &size);// we wnat to know about our array size
    int a[size];
    int b[size];
    printf("Enter the array Element:\n");
    for (int i = 0; i < size; i++)
    {

        scanf("%d", &a[i]);// we take the input of array that we want to sorting
    }


    /*In here we cheeck every number and find the maximum numberof our array. It will help to us to find the our counting array size*/
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }

    /*We take the max valu and dlecar our array. That will count our main array element how number that stay in the main array*/
    int c[max + 1]
    //we assing all value is 0; cause we need to count it
    for (int i = 0; i < max; i++)
    {

        c[i] = 0;
    }

    for (int i = 0; i < size ; i++)
    {

        int temp = a[i];
        c[temp] = c[temp] + 1;
        //We count the number
 
    }
 /*We need to 3 array for sorting our data, !st is main array that we want to sort.. 2nd ei count the poision of numbar
 and if find the number again then count ++; and printit by the conditon... we can use 3rd array or not.. in here we don't use
 the 3rd logic*/

    printf("The result of counting sort: \n");

    for (int i = 0; i <= max; i++)
    {

        if (c[i] != 0)
        {

            while (c[i] != 0)
            {
                printf("%d ", i);
                --c[i];
                // we print the position of the array. cause you store the position of the element and count it, and here we print the position
            }
        }
    }
}
