#include <stdio.h>
#include "op.h"
//3. generate N as row display this
/* * * *
* * *
* *
*

*/
/*
void generate_pattern(int row_size)
{
    int i, j;

    for(i = row_size; i >= 1; i--)
        {
        for(j=0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}
*/

/* display this
*
* *
* * *
* * * *

*/
/*
void generate_pattern(int row_size)
{
    int i,j;

    for(i = 1; i <=row_size; i++){
        {
        for(j=1; j <=i; j++)
            printf("* ");
        printf("\n");
}
}

}  */


/* display this
* * * *
  * * *
    * *
      *
*/
void generate_pattern(int row_size)
{
    int i,j,space;

    for(i = row_size; i >=1; i--)
    {
        for(space = 0;space<(row_size-i);space++) //giving space at the col
            printf("  ");

        for(j=0; j <i; j++)
            printf("* ");
        printf("\n");
        }

}
