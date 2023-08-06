#include<stdio.h>

void printHello(int count);

int main()
{
    int c;
    scanf("%d", &c);
    printHello(c);
    return 0;
}


// RECURSIVE FUNCTION 
void printHello(int count)
{

if(count==0)
{
return;
}

printf("Hello , World ! \n");

printHello(count-1);

}
