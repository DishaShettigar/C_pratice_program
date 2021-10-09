#include <assert.h>
#include "op.h"
#include <stdio.h>
void digits_no();
int main()
{

    digits_no();
    return 0;
}
//print two digit whose sum of both digit is multiple of seven
void digits_no()
{
    int n;
    printf("Enter the two digit number:");
    scanf("%d", &n);
    digits(n);
}

