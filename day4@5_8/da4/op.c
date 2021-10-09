
#include "op.h"

int consecutive(int *array, int size)
{
    int sum= 0;
    for(int i = 0; i <= size - 1;i++)
    {
        sum += (array[i] * array[i+1]);
    }
    return sum;
}
