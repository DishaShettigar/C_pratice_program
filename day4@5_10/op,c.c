#include <stdio.h>
#include "op.h"
void calender()
{
    int day,month,year;
    printf("Enter the date(DD/MM/YYYY):");
    scanf("%d/%d/%d",&day,&month,&year); //note: put /
    if(day>1 && day <31)
        printf("%d",day);
    else
        printf("Invalid");
    //if day is 1,21,31, add 'st'
    if(day ==1 || day == 21 || day ==31)
        printf("st ");
    else if(day == 2 || day == 22)
        printf("nd ");
    else if(day == 3 || day == 23)
        printf("rd ");
    else
        printf("th ");

    switch(month)
        {
            case 1:
            printf("January");
            printf("%d",year);
            break;
            case 2:
            printf("February");
            printf("%d",year);
            break;
            case 3:
            printf("March");
            printf("%d",year);
            break;
            case 4:
            printf("April");
            printf("%d",year);
            break;
            case 5:
            printf("May");
            printf("%d",year);
            break;
            case 6:
            printf("June");
            printf("%d",year);
            break;
            case 7:
            printf("July");
            printf("%d",year);
            break;
            case 8:
            printf("August");
            printf("%d",year);
            break;
            case 9:
            printf("september");
            printf("%d",year);
            break;
            case 10:
            printf("october");
            printf("%d",year);
            break;
            case 11:
            printf("november");
            printf("%d",year);
            break;
            case 12:
            printf("December");
            printf("%d",year);
            break;
            default:
                printf("invalid");
        }


}
