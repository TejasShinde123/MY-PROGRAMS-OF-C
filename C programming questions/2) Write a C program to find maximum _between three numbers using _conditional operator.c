#include<stdio.h>

/*Write a C program to find maximum 
between three numbers using 
conditional operator.*/
int main()
{
    int num1,num2, num3;
    
    
    printf("Enter first number :- ");
    scanf("%d",&num1);
    
    
    printf("Enter second number :- ");
    scanf("%d",&num2);
    
    
    printf("Enter third number :- ");
    scanf("%d",&num3);
   
    if(num1>num2)
    {
    printf("The maximum number is :- %d", num1);
    }
    
    if(num1<num2)
    {
    printf("The maximum number is :- %d", num2);
    }
    
    
    else
    {
    printf("The maximum number is :- %d", num3);
    }
    
    
    return 0;
}