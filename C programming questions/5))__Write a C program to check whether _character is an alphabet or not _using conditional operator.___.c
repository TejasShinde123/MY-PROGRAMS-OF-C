#include<stdio.h>

/*Write a C program to check whether 
character is an alphabet or not 
using conditional operator.*/

int main()
{
    char ch;
    
    
    printf("Enter character :- ");
    scanf("%c",&ch);
    
    
    if((ch>='a' || ch<='z') || (ch>='A' || ch<='Z')) 
    {
    printf("The character %c is Alphabet", ch);
    }
    
    
    else
    {
    printf("The character %c is NOT Alphabet ", ch);
    }
    
    
    return 0;
}