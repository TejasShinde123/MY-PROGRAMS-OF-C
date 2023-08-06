#include<stdio.h>

/*Write a C program to check whether
a number is even or odd using 
conditional operator.*/
int main()
{
    int num;
    
    
    printf("Enter  number :- ");
    scanf("%d",&num);
    
    
    if(num%2==0)
    {
    printf("The number %d is EVEN", num);
    }
    
    
    else
    {
    printf("The number %d is ODD ", num);
    }
    
    
    return 0;
}