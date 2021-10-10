#include <stdio.h>
#include "op.h"
int string_length()
{
    //char str[]={"hello"};
    int i;
    char str[1000];
    printf("Enter the string:");
   // scanf("%s", str);
    gets(str);
    for (i = 0; str[i] != '\0';i++);    // length = strlen(str); //string.h
    printf("Length of String is %d", i);
    return 0;
}

//reading the string with space
int string_space()
{
    char str[]={"hi hello"};
    int i,len=0,space=0,total_length;
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            space++;
        else
            len++;
    }
    total_length= space+len;
    printf("Length of string is:%d", total_length);
    return 0;
}
