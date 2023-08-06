#include<stdio.h>
/*Write a C program to enter two 
numbers and perform all arithmetic 
operations.
.*/
int main()
{
    int num1,num2,x;
    printf("Enter 1st number :- ");
    scanf("%d", &num1);
    
    printf("Enter 2nd number :- ");
    scanf("%d", &num2);
    
    x=printf(" Enter the operation to be done :- \n 1=addition \n 2=subtraction \n 3=multiplication \n 4= division \n");
    
    scanf("%d", &x);
    
    int sum, sub, mul , div;
        
    if (x==1)
    {
    sum = num1 + num2 ;    
    printf("The addition is :-  %d \n", sum);
    }
    
    
    if (x==2)
    {
    sub = num1 - num2 ;    
    printf("The subtraction is :-  %d /n", sub);
    }
    
    
    if (x==3)
    {
    mul = num1 * num2 ;    
    printf("The multiplication is :-  %d \n", mul);
    }
    
    
    if (x==4)
    {
    div = num1 / num2 ;    
    printf("The division is :-  %d \n", div);
    }
    
    
    return 0;
}