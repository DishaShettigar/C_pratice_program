#include <assert.h>
#include "op.h"
#define SIZE 10

int duplicate_no();
int main()
{
    //duplicate_no();

    int a[SIZE]={2,7,6,8,10,30,10};
    assert(linear_search_array(a, SIZE, 1) == 0);
    assert(linear_search_array(a, SIZE, 2) == 1);
    assert(linear_search_array(a, SIZE, 9) == 0);
    assert(linear_search_array(a, SIZE, 7) == 1);
    assert(linear_search_array(a, SIZE, 6) == 1);
    assert(linear_search_array(a, SIZE, 8) == 1);


   int n = sizeof(a)/ sizeof(a[0]);
   assert(binarySearch(a, 0, n-1, 10) == 1);
   assert(binarySearch(a, 0, n-1, 40) == -1);
   assert(binarySearch(a, 0, n-1, 10) == 1);
   assert(binarySearch(a, 0, n-1, 1) == -1);
   assert(binarySearch(a, 0, n-1, 44) == -1);


    return 0;
}

int duplicate_no()
{
    int a[SIZE]= {10, 10,30,40,11,31,40,35,30,44};
    duplicate(a, SIZE);
    return 0;
}
