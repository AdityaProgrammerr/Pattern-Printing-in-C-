// Input : 5
// Output : * * * * *

#include<stdio.h>

void Display(int iNo)   // Dukan
{
   int iCnt = 0;
   for(iCnt = 1;iCnt<=iNo; iCnt++)
   {
       printf("*\t");
   }
}

int main()
{
    int iValue = 0;
    
    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);    // Dukan na kade janar
    
    return 0;
}