#include "op.h"

#include<math.h>
//upper to lower
void string_upper_to_lower(char *s)
{
    int i;

    for(i=0; s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90) // ASCI value for upper
            s[i]=s[i]+32;// to convert to lower add 32

        /*lower to upper
        if(s[i]>=97 && s[i]<=122)
            s[i]-=32;  */
    }
}
// area of circle
float area(int r)
{

    return (22*r*r)/7; //area= PI*radius*radius
}

//simple interest and compound interst
float si(float p, float r, float t)
{

    return (p * r * t)/100;
}

float ci(float r, float t, float p)
{
    return ((p * (pow(1 + r / 100, t)- 1)));
}


//convert cel to fahr & fahr to cel
float cel_to_fahr(float cel)
{
    return ((cel * 9/5 ) + 32);
}
float fahr_to_cel(float fahr)
{
    return((fahr - 32)* 5/9);
}
