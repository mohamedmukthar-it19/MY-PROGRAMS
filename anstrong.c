
#include<stdio.h>
int main()
{
   int a,b,sum=0,c;

   
   printf("\nEnter a number:");
   scanf("%d",&a);

   
   b = a;

  
   while (a!= 0)
   {
      c = a % 10;
      sum = sum + (c*c*c);
      a = a / 10;
   }

   
   if(b == sum)
      printf("\n%d is an Armstrong Number",b);
   else
      printf("\n%d is not an Armstrong Number",b);
   return(0);
}
