#include <assert.h>
#include "operator.h"
#include <stdio.h>
#define EVEN 1
#define ODD 2

#define LEAP 1
#define NOTLEAP 0
int left_shift_pow();
int main()
{
    assert(is_even_or_odd(9) == ODD);
    assert(is_even_or_odd(26) == EVEN);
    assert(is_even_or_odd(6) == EVEN);
    assert(is_even_or_odd(9) == ODD);
    assert(is_even_or_odd(50) == EVEN);
    assert(is_even_or_odd(29) == ODD);

    //int leap, notleap;
    assert(leap_year(2004)== LEAP);
    assert(leap_year(1999)== NOTLEAP);
    assert(leap_year(2016)== LEAP);
    assert(leap_year(1700)== NOTLEAP);


    left_shift_pow();

   // return 0;

}

int left_shift_pow()
{
    int i=4;//i=4,5,6,1,2...
    int power;
    power = left_shift(i);
    printf("pow(2, %d) = %d\n", i,power);
    return 0;
}
