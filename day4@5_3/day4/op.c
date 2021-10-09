#include <stdio.h>
#include "op.h"

int min_max(int a[],int size)
{
    int i,min,max;

    if(size < 0)
        return -1;

    min = max = a[0];

    for(i=1 ; i< size; i++)
    {
        if(min > a[i])
            min = a[i];
        if(max < a[i])
            max = a[i];
    }
    printf("Minimum of array is:%d\n",min);
    printf("Maximum of array is:%d\n",max);
    printf("\n\n");
    return 0;
}



int set_union(int A[], int B[], int size)
{
    int i,j,flag=0, m=0, uni[20];
    for(i=0; i<size; i++)
    {
        for(j=0; j<size;j++)
        {
            if (A[i] == B[j])
                flag= 1;
            if(i == 0)
            {
                uni[m] = B[j];
                m++;
            }
        }
        if(flag != 1)
        {
            uni[m] = A[i];
            m++;
        }
        else
            flag=0;
    }
    printf("Union of set:\n");
    for(i=0; i<m;i++)
        printf("%d\n",uni[i]);
    return 0;

}
int set_intersection(int A[], int B[], int size)
{
    int i,j,k=0,inter[20];
    for(i=0; i<size; i++)
    {
        for (j=0; j<size; j++)
        {
            if(A[i] == B[j])
               {
                   inter[k]=A[i];
                   k++;
               }
        }
    }
    printf("Intersection of set:");
    for(i=0; i<k;i++)
        printf("%d\n",inter[i]);
    return 0;
}

int set_difference(int A[], int B[], int size)
{
    int i,j,flag=0, q=0, diff[20];
    for(i=0; i<size; i++)
    {
        flag =1;
        for(j=0;j<size;j++)
        {
            if (A[i] == B[j])
            {
                flag = 0;
            }
        }
        if(flag == 1)
          {
            diff[q]= A[i];
            q++;
         }


  }
   printf("Difference of set:\n");
   for(i=0; i<q;i++)
        printf("%d\n",diff[i]);
   return 0;

}
