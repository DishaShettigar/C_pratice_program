#include <stdio.h>
#include "operator.h"

void series(int n)
{
    int i;
    //int sum= 0;
    int t=1;
    for(i=1; i<=n; i++)
    {
        printf("%d", t);
        if(i<n)
        {
            printf(" + ");
        }
        //sum=sum+t; // to find the sum of series
        t= (t*10)+ 1;
    }
    //printf("\n the sum is:%d",sum);

}


void armstrong(int n)
{
    int temp,rem,sum=0;
    temp=n;
    while(n>0)
    {
        rem=n % 10;
        sum = sum+(rem*rem*rem);
        n = n/10;
    }
    if(temp == sum)
        printf("Armstrong number");
     else
        printf("Not Armstrong number");
}

int ambicable(int a,int b)  //1184&1210, 220&284...
{
    int sum1=0, sum2=0;
    for (int i=1; i<a; i++)
    {
        if (a%i == 0)
        {
            sum1 += i;
        }
    }
    for(int i=1;i<b;i++)
    {
        if(b%i == 0)
        {
            sum2 +=i;
        }
    }
    if((a == sum2) && (b== sum1))
    {
        printf("Ambicable Number");
    }
    else
    {
        printf("Not ambicable number");
    }
    return 0;
}



int menu(int n)
{
    int x,y,ans;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf(" Enter value of y:");
    scanf("%d", &y);
    printf("1.Adition\n2.Subtraction\n3.Product\n4.Division\n");
    printf("Enter the choice:");
    scanf("%d", &n);
    switch(n)
    {
    case 1:ans = x+y;
        printf("Adition:%d",ans);
        //return x+y;
        break;
    case 2: ans = x - y;
       printf("Substraction: %d", ans);
        //return x-y;
        break;
    case 3:ans = x * y;
          printf("Product: %d", ans);
        //return x * y;
         break;
    case 4:if(y==0)
              printf("Invalid");
            else
            {
                ans = x/y;
                printf("Division: %d", ans);
            }
            break;
     default : printf("Invalid choice");
             break;
    }
    return 0;
}
