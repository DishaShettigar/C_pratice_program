#include <stdio.h>
#include "op.h"

int main()
{
   float unit;
    printf("Enter the units consumed:");
    scanf("%f", &unit);
    total_charge(unit);
    return 0;
}
