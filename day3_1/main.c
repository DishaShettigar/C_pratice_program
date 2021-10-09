
//#include <assert.h>
#include <stdio.h>
#include "op.h"
void binary();
int  main()
{
    //binary to decimal
    binary();

   return 0;
}


void binary()
{
    int n;
    int decimal, binary;
    printf("Enter the binary number:");
    scanf("%d",&n);
    decimal= binary_to_decimal(n);
    printf("Decimal number is: %d\n", decimal);

    printf("Enter the decimal no:");
    scanf("%d", &n);
    binary= decimal_to_binary(n);
    printf("Binary number: %d", binary);

}
