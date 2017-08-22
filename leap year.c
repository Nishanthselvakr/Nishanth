#include<stdio.h>
int main()
{
   int year;
   printf("Enter the year:");
   scanf("%d",&year);
    if(year%4==0)
        printf("The given number is leap year");
    
        else
        
        printf("The given number is not leap year");
        
    return 0;
}
