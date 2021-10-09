#include <stdio.h>
#include <assert.h>
#include "op.h"
void sort_array();
void swap_no();

int main()
{
    //sort_array();
    swap_no();

    return 0;
}
void sort_array()
{
    int i,size,a[1000];             //size =5
                                    //int a[] = { 3,8,1,3,0};
    printf("Enter the size:");
    scanf("%d",&size);
    printf("Enter the elements:");
    for(i=0; i<size; i++)
    {
       scanf("%d", &a[i]);
    }
    //ascending order
    sort_ascending(a,size);
    printf("Elements in ascending order:");
    for(i=0;i<size; i++)
        printf("%d\n", a[i]);
    //descending order
    sort_descending(a,size);
    printf("Elements in descending order:");
    for(i=0;i<size; i++)
        printf("%d\n", a[i]);
}


void swap_no(int x, int y)
{

   x=5; y=10;
   printf("value of x=%d, y=%d\n", x,y);
   swap(x,y);

}
