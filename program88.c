// Input : 5
// Output : 1 * 3 * 5*  

// 1 2 4 5 6 Counter
// 1 * 3 * 5 *  Output

#include<stdio.h>

void Display(int iNo)   // 3  
{
   int iCnt = 0;

   for(iCnt = 1;iCnt <= iNo; iCnt++)
   {
     if((iCnt % 2) == 0)
     {
        printf("*\t");
     }
     else
     {
         printf("%d\t",iCnt);
     }
   }
}

int main()
{
    int iValue = 0;
    
    printf("Please enter the value :\n");
    scanf("%d",&iValue);

    Display(iValue);  //Display 3 
    
    return 0;
}