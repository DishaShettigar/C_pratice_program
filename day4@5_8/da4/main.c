#include <stdio.h>
#include "op.h"
#define SIZE 10

int find();
int main()
{
     find();
    return 0;
}

int find()
{
    int array[SIZE] = {0}, elements = 0;

    printf("Enter the number of array of size:");
    scanf("%d",&elements);

   printf("Enter the elements:",elements);
    for(int i = 0; i < elements;i++)
        {
        scanf("%d",&array[i]);
    }
    printf("Sum of consecutive elements of array is: %d\n",consecutive(array, elements));
    return 0;
}

