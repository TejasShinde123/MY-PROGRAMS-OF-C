/*
 * C program to check alphabets using Conditional operator
 */

#include <stdio.h>

int main()
{
    char ch;
    
    /*
     * Input character from user
     */
    printf("Enter any character: ");
    scanf("%c", &ch);
    
    /*
     * If (ch>'a' and ch<'z') or (ch>'A' and ch<'Z') then
     *     print alphabet
     * else
     *     print not alphabet
     */
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
    {
         printf("It is ALPHABET");
         
    }
    
    else
    {
        printf("It is NOT ALPHABET");
    }
    return 0;
}