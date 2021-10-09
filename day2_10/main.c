#include<stdio.h>

#include "op.h"
#define PI 3.14
int shapes_volume();
int shapes_volume_fun();
int main()
{

   //shapes_volume();
    shapes_volume_fun();
    return 0;
}
//normal method
int shapes_volume(int choice)
{
    printf("\n***VOLUME OF SHAPES***\n");
    printf("1.CUBE\n 2.CUBOID\n 3.SPHERE\n 4.CYLINDER\n 5.CONE\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    shapes(choice);
    return 0;
}

//passing function
int shapes_volume_fun(int choice)
{
    float a,r,l,h,w,volume;
    printf("\n***VOLUME OF SHAPES***\n");
    printf("1.CUBE\n 2.CUBOID\n 3.SPHERE\n 4.CYLINDER\n 5.CONE\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch(choice)
    {
        //CUBE
        case 1:printf("Enter the side of cube:");
               scanf("%f",&a);
               volume= cube(a); //v=a^3 ;a - side
               printf("The volume is: %f",volume);
               break;
        //CUBOID
        case 2:printf("Enter the length,width,height:");
               scanf("%f%f%f", &l,&w,&h);
               volume = cuboid(l,h,w);
               printf("Volume is: %f", volume);
               break;
        //SHPERE
        case 3:printf("Enter the raduis:");
               scanf("%f", &r);
               volume = sphere(r);
               printf("Volume is: %f",volume);
               break;
        //CYLINDER
        case 4 :printf("Enter the radius and the height: ");
                scanf("%f%f", &r,&h);
                volume = cylinder(r,h);
                printf("Volume is: %f",volume);
                break;
        //CONE
        case 5: printf("Enter the radius and the height: ");
                scanf("%f%f", &r,&h);
                volume = cone(r,h);
                printf("Volume is: %f",volume);
                break;
        default: printf("INVALID CHOICE");
                 break;
    }
    return 0;
}
