#include <stdio.h>
#include "op.h"
void  power_no();
void fact_no();
int recursive_fun();
int main()
{
    //power_no();
    //fact_no();
    //fx_function(2,1);
    recursive_fun();
    return 0;
}

void power_no()
{
    int x,y, ans;
    printf("Enter the base and exponent:");
    scanf("%d%d", &x, &y);
    ans = power(x,y);
    printf("Result is %d",ans);
}

void fact_no()
{
    int n,ans;
    printf("Enter the number:");
    scanf("%d", &n);
    ans=n*fact(n-1);
    printf("Result is: %d",ans);
}


int recursive_fun(int x,int n)
{
    printf("Enter the number of elements in series:");
    scanf("%d",&n);

    printf("Enter the value of x:");
    scanf("%d",&x);

    //a=recursive(x,n);
    printf("F(x)=%d",recursive(x,n));
    return 0;
}
