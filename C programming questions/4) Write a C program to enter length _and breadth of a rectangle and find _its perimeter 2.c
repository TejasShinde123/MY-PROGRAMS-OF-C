#include<stdio.h>

/*Write a C program to enter length 
and breadth of a rectangle and find 
its perimeter, */

int main()
{
    int brd, len , peri;
    
    printf("Enter length of rectangle(in cm) :- ");
    scanf("%d", &len);
    
    printf("Enter breadth of rectangle(in cm) :- " );
    scanf("%d", &brd);
    
    peri = (len + brd) * 2 ;
    
    printf("The perimeter of rectangle is %d cm " , peri);
    return 0;
}