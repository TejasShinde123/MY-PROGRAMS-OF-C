#include<stdio.h>

/*Write a C program to enter length 
and breadth of a rectangle and find 
its area, */

int main()
{
    int brd, len, area ;
    
    printf("Enter length of rectangle(in cm ) :- ");
    scanf("%d", &len);
    
    printf("Enter breadth of rectangle(in cm) :- " );
    scanf("%d", &brd);
    
    area = len * brd;
    printf("The area of rectangle is %d\n cm²", area);
    
    return 0;
}