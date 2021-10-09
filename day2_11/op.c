#include <stdio.h>
#include "op.h"
int total_charge(float unit)
{
    float amt;
    if(unit<=0)
    {
        amt=100;// if the unit is 0, min amt consider as 100
    }
    else if(unit <=200)
    {
        amt = unit * 1;
    }
    else if(unit <=300)
    {
        amt = (200 * 1) + (unit - 100)* 1.5;
    }
    else
    {
        amt = (200 * 1) + (100 * 1.5) + (unit - 300)* 2 ;
    }
    printf("Total charge amount: %f", amt);
    return 0;
}
