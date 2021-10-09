#include <stdio.h>

#include "op.h"
#define PI 3.14

//volume of shapes
int shapes(int choice)
{
    float a,l, w, h, r, volume;
    switch(choice)
    {
        //CUBE
        case 1:printf("Enter the side of cube:");
               scanf("%f",&a);
               volume = a*a*a; //v=a^3 ;a - side
               printf("The volume is: %f",volume);
               break;
        //CUBOID
        case 2:printf("Enter the length,width,height:");
               scanf("%f%f%f", &l,&w,&h);
               volume = l*h*w;
               printf("Volume is: %f", volume);
               break;
        //SHPERE
        case 3:printf("Enter the raduis:");
               scanf("%f", &r);
               volume = (4*PI*(r*r*r)/3);
               printf("Volume is: %f",volume);
               break;
        //CYLINDER
        case 4 :printf("Enter the radius and the height: ");
                scanf("%f%f", &r,&h);
                volume = PI*r*r*h;
                printf("Volume is: %f",volume);
                break;
        //CONE
        case 5: printf("Enter the radius and the height: ");
                scanf("%f%f", &r,&h);
                volume = PI*r*r*h/3;
                printf("Volume is: %f",volume);
                break;
        default: printf("INVALID CHOICE");
                 break;
   }

    return 0;
}

// passing function
float cube(float a)
{
    return (a*a*a);
}
float cuboid(float l,float h,float w)
{
    return (l*h*w);
}
float sphere(float r)
{
    return (4/3*PI*r*r*r);
}
float cylinder(float r,float h)
{
    return (PI*r*h);
}
float cone (float r,float h)
{
    return (PI*r*r*h/3);
}
