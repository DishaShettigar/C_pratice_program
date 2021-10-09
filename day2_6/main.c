#include <stdio.h>
#include <assert.h>
#include "operator.h"

void series_number();
void armstrong_number();
int menu_program();
void check_ambicable();
int main()
{


   //series_number();
   //series(5);

   //armstrong_number(); //0,1,153,370,371,407.
   // armstrong(407);

//menu driven prgm
  /* assert(menu(1)== 3);
   assert(menu(2)== 1 );
   assert(menu(3)==2);
   assert(menu(4)==0); */

  // menu_program();

  check_ambicable();


}
void series_number(int n)
{
    printf("Enter the value:");
    scanf("%d", &n);
    series(n);
}

void armstrong_number(int n)
{
    printf("Enter the number:");
    scanf("%d", &n);
    armstrong(n);
}

int menu_program(int n)
{
    menu(n);
    return 0;
}

void check_ambicable(int a,int b)
{

    printf("Enter the numbers a and b:");
    scanf("%d%d",&a,&b);
    ambicable(a,b);
}
