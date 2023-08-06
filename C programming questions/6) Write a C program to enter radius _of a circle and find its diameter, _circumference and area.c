#include<stdio.h>

/*Write a C program to enter radius 
of a circle and find its diameter, 
circumference and area..*/

int main()
{
    float rad , dia, circum, area ;
    printf("Enter the radius of a circle:- ");
    scanf ("%f", &rad);
    
    dia= 2*rad;
    printf("The diameter of a circle is %.2f \n ", dia);
    
    circum=2 * rad *  3.14;
    printf("The  circumference of a circle is %.2f\n ", circum);
    
    area =2*3.14*rad ;
    printf("The area of a circle is %.2f ", area);
    
    return 0;
}