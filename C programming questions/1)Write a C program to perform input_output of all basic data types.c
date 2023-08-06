#include<stdio.h>
//Write a C program to perform input
//output of all basic data types
int main()
{
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
    
    
      //OUTPUT 
    int a =12 ;
    printf(" %d \n ",  a);
     
    
    float pi = 3.14 ;
    printf("%.5f\n ", pi);
    
    
    char star = '*' ;
    printf("%c\n ", star);

    return 0;
}