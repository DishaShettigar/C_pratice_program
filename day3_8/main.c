//#include <assert.h>
#include <stdio.h>
#include "op.h"
//#define SQUARE(X) X*X
int menu();

int main()
{
    //int x;
    // square(x);

    //int a,b;
    //concatenate(a,b);

    menu();

    /* assert(SQUARE(5)== 25);
    assert(SQUARE(7)== 49);
    assert(SQUARE(5)== 25); */
    return 0;
}


//menu pgrm
int menu()
{
    int choice;
    float n,x;
    double value;
    printf("1. SQUARE ROOT\n 2.Natural log\n 3.log10\n 4.POWER\n 5.Cos(x)\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        //SQUARE ROOT
        case 1: printf("Enter the number:");
                scanf("%f", &n);
                value = squareroot(n);
                printf("Result:%f", value);
                break;
        //NATURAL LOG
        case 2: printf("Enter the value:");
                scanf("%f", &n);
                value = naturalog(n);
                printf("Result:%f", value);
                break;
        //log10x
        case 3: printf("Enter the value:");
                scanf("%f", &n);
                value = logx(n);
                printf("Result:%f", value);
                break;
        // power(x,n)
         case 4: printf("Enter the base and exponent:");
                scanf("%f%f", &x,&n);
                value = power(x,n);
                printf("Result:%f", value);
                break;
        // COS
         case 5: printf("Enter the value of x:");
                scanf("%f", &x);
                value = cosx(x);
                printf("Result:%f", value);
                break;
        default:
            printf("Inavlid choice");
    }
    return 0;
}

