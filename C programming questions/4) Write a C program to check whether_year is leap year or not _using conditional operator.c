#include<stdio.h>

/*Write a C program to check whether
year is leap year or not 
using conditional operator.*/

int main()
{
    int year;
    
    
    printf("Enter  year :- ");
    scanf("%d",&year);
    
    
    if(year%400==0 )
    {
    printf("The year %d is LEAP", year);
    }
    
    
    else
    {
    printf("The year %d is NOT LEAP ", year);
    }
    
    
    return 0;
}