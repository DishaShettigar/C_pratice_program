#include <stdio.h>
#include "op.h"
int sort_ascending(int a[], int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
           {
            temp = a[i];
            a[i]= a[j];
            a[j]=temp;
           }
        }
    }
    return 0;
}


int sort_descending(int a[], int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(a[i]<a[j])
           {
            temp = a[i];
            a[i]= a[j];
            a[j]=temp;
           }
        }
    }
    return 0;
}



int swap(int x,int y)
{
    int temp;

    temp= x;
    x = y;
    y = temp;
    printf("After swapping x=%d, y=%d",x,y);
    return 0;
}
