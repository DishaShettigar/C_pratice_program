#include <stdio.h>

#include "op.h"

//print two digit whose sum of both digit is multiple of seven
int digits(int n)
{
    int sum=0 , rem;
    while(n>0)
    {
        rem = n %10;
        sum = sum +rem;
        n = n /10;
    }
    if ( sum % 7 ==0)
        printf("%d is a multiple of 7",sum);
    else
        printf("%d is not multiple of 7",sum);
    return 0;
}
