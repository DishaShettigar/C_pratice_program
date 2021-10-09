#include <stdio.h>
#include "op.h"

//binary to decimal
int binary_to_decimal(int n)
{
    int rem ,decimal_no, base=1;
     while(n>0)
    {
        rem = n % 10;//to get last digit
        decimal_no = decimal_no + rem * base;
        n = n/10; // to get quotient
        base = base * 2;
    }
    return decimal_no;
}

//decimal to binary
int decimal_to_binary(int n)
{
    int rem, binary_no = 0, temp=1;
    while(n>0)
    {
        rem = n % 2;
        binary_no = binary_no + rem * temp;
        n = n/ 2;
        temp = temp*10;
    }
    return binary_no;
}


