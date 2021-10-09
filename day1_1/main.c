#include<stdio.h>
#include<string.h>
#include<math.h>
#include "op.h"

void upper_to_lower();
void area_of_circle();
int simple_compound();
int fahr_cel();

int main()
{
    //upper_to_lower();

    //area_of_circle();

    simple_compound();

    //fahr_cel();

    return 0;
    }
// upper to lower string
void upper_to_lower()
{
    char s[1000];
    printf("Enter the string in UPPER Case:");
    gets(s);
    string_upper_to_lower(s);
    printf("\n Sting in LOWER Case = %s\n",s);
}

// area of circle

void area_of_circle()
{
     int r;float a;
    printf("Enter the radius:");
    scanf("%d", &r);
    a=area(r);
    printf("Area: %f",a);
}
// SI CI
int simple_compound()
  {
      float s,p=1000, r = 6.5 ,t =2,c;
      //printf("Enter the principle:");
      //scanf("%f", &p);
      //printf("Enter the rate:");
     // scanf("%f", &r);
     // printf("Enter the time:");
     // scanf("%f", &t);
      s = si(p, r, t); // SI
      c = ci(r, t, p);// CI
      printf("Simple Interest:%f\n",s);
      printf("Compound Interest: %f", c);
      return 0;
  }
// cel to fahr
int fahr_cel()
{
    float cel=1000,f,c, fahr=1200;

    //printf("Enter the temp in celsius:");
   // scanf("%f", &cel);
    f= cel_to_fahr(cel);
    printf("Fahrneit is: %f\n",f);

    //printf("Enter the temp in fahrneit:");
    //scanf("%f", &fahr);
    c = fahr_to_cel(fahr);
    printf("Celsius is : %f", c);
    return 0;
}
