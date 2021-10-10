#include <stdio.h>
#include "op.h"
void lower_to_upper()
{
    //char str[]={"HeLlo"};
    char str[1000];
    printf("Enter the lower case string:");
    scanf("%s", str);
    int i;
    printf("%s in upper case is ",str);
    for(i=0;str[i];i++)
    {
            if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s\n",str);
}



void reverse_string()
{
   //char str[]={"hello"}, revstr[100];
   char str[1000],revstr[1000];
   int i,len,j;
   printf("Enter the string to be revesred:");
   scanf("%s", str);
  	for (i = 0; str[i] != '\0';i++);
  	len=i;
    for (i = len - 1; i >= 0; i--)
  	{
  		revstr[j++] = str[i];
  	}
  	revstr[i] = '\0';

  	printf("\n String after Reversing = %s", revstr);
}
