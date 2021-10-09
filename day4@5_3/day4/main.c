
#include "op.h"

#define SIZE 10
void set();

int main()
{
   // max_min_no();
    int size=5;
    int a[]={5,4,1,8,2};
    min_max(a,size);

    set();
    return 0;

}

void set()
{

    int A[SIZE]= { 14, 13, 15, 12, 20, 45,10,70,34,78};
    int B[SIZE]= {46, 24, 25, 12, 68, 24, 32, 34, 56, 27};
    set_union(A, B,SIZE);

    set_intersection(A, B, SIZE);

    set_difference(A, B, SIZE);

}

