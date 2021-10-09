
#include "op.h"
int power(int x, int y) //x=base, y= exponent
{

    if(y == 0)
        return 1;
    else
        return(x * power(x,y-1));
}


int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}

//3_7
int recursive(int x, int n)
{
    int sum=0;
    for(int i = 0; i <= n; i += 2){
        sum = sum + ((x * i)/fact(i));
    }

    return sum;
}


