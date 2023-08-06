#include<stdio.h>

/*Write a C program to enter length in
centimeter and convert it into 
meter and kilometer.*/

int main()
{
    float cen ,kilo, met ;
    
    printf("Enter the length in centimetres :- ");
    scanf("%f", &cen);
    
    met = cen / 100;
    printf("The length in meters is %.2f \n ", met);
   
    
    kilo = cen / 1000;
    printf("The length in Kilometres is %.2f", kilo);
    
    
    return 0;
}