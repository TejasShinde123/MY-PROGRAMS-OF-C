#include<stdio.h>
/*Write a C program to enter two 
numbers and find their sum.*/
int main()
{
    int num1,num2, sum;
    printf("Enter 1st number :- ");
    scanf("%d", &num1);
    
    printf("Enter 2nd number :- ");
    scanf("%d", &num2);
    
    sum = num1 + num2 ;
    
    printf("The sum is :-  %d", sum);
    
    
    return 0;
}