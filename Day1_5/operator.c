#include "operator.h"


int is_even(int x) // return 1 if even and return 2 if its odd
{
    return x%2;
}
int is_even_or_odd(int number)
{
    if(number % 2 == 0)
        return 1;
    else
        return 2;
}

//Leap year
int leap_year(int year)
{

    if(((year % 4 == 0) && (year % 100!=0))|| (year % 400==0))
        return 1; // leap year
    else
        return 0;//not leap year
}


//power 2^N using left shift operator
int left_shift(int i )
{

   return 1<<i;
}

