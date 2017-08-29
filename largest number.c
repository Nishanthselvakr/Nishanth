#include<stdio.h>
void main()
{
int x,y,z;
int largest;
    printf("Enter three numbers:");
    scanf("%d%d%d",&x,&y,&z);
 
    if(x>y && x>z)        
        largest=x;
    else if(y>x && y>z)       
        largest=y;
    else
        largest=z;
 
    printf("Largest number is = %d",largest);
 
    return 0;
}
