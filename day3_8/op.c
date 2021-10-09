#include <stdio.h>
#include <math.h>
#include "op.h"
#define SQUARE(X) X*X
#define CONCATENATE(A,B) A##B
int square(int x)
{
    printf("Enter the number:");
    scanf("%d", &x);
    printf("SQUARE = %d",SQUARE(x));
    return 0;
}


//menu prgm
float squareroot(float n)
{
     double v;
     v =sqrt(n);
     return v;
}

float naturalog(float n)
{
    return log(n);
}

float logx(float n)
{
    return log10(n);
}
float power(float x, float n)
{
    return pow(x,n);
}

float cosx(float x)
{
    return cos(x);
}

int concatenate(int a,int b)
{

    printf("After concartenating two integers 100 and 145: %d\n",CONCATENATE(100,145));

    return 0;
}
