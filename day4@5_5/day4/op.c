#include <stdio.h>
#include "op.h"


int duplicate(int a[], int size)
{
    int i, j, k;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]== a[j])
            {
                for(k=j; k<size; k++)
                {
                    a[k] = a[k+1];
                }
                size--;
                j--;

            }
        }
    }
    printf("The numbers are:");
    for(i=0; i<size; i++)
        printf("%d\n", a[i]);
    return 0;
}


// Function returns 1 if element found, returns 0 if not
int linear_search_array(int a[], int size, int element)
{
    int i;

    for(i = 0; i< size; i++)
    {
        if(a[i] == element)
            return 1;
    }
    return 0;
}

int binarySearch(int a[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = (l + r)/2;

        // If the element is present at the middle itself
        if (a[mid] == x)  return 1;

        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (a[mid] > x) return binarySearch(a, l, mid-1, x);

        // Else the element can only be present in right subarray
        return binarySearch(a, mid+1, r, x);
   }

   // We reach here when element is not present in array
   return -1;
}
