#include<stdio.h>

/*Write a C program to input number 
of days from user and convert it to 
years, weeks and days.*/

int main()
{
    int daynums, days , week;
    printf("Enter number of days :- ");
    scanf("%d", &daynums);
     
    if (daynums < 360)
    {
    
    week = daynums / 7;
            if (week % 2 == 0)
                {
                    days =0;                             
                } 
            else 
                {
                    days =   daynums - week * 7 ;            
                }
            
            
    printf("0 YEAR, %d WEEKS , %d DAYS ", week , days); 
    
    }
    
    
    else if (daynums > 365 && daynums < 730)
    {
       week = (daynums - 365) / 7;
            if (week % 2 == 0)
                {
                    days =0;                             
                } 
            else 
                {
                    days =  (daynums -365) - (week * 7) ;            
                }
       
     
      printf("1 YEAR, %d WEEKS , %d DAYS ", week , days); 
       
    }
    
     else  if (daynums =365)
        {
    
            printf("1 YEAR , 0 WEEKS , 0 DAYS ");
    
        }
                                 
    return 0;
}