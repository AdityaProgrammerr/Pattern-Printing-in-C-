// Input : Row 4 Column 4

/*
    A 
    B B 
    C C C 
    D D D D

    for(expression; expression; expression)
     {
         expression;
      }
       all expression are optional and can be multiple

*/
   
#include<stdio.h>

void Display(int iRow,int iCol)
{
   int i = 0;
   int j = 0;
    char ch = '\0'; 

  for(i = 1;i<=iRow; i++)  // Outer
   {
      for(j = 1,ch = 'a'; j<= i;j++,ch++)
     {
         
          printf("%c\t",ch);
       }   
       printf("\n");
   }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

     printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);  //Display 3 
    
    return 0;
}