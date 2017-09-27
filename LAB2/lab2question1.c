#include <stdio.h>
int main ()
{

   int number, num1, num2, num3, num4, num5; 
 
   printf("Enter a number between 0 and 32767: \n");
   scanf("%d", &number);
   
   num1 = number %8;
   number /=8;

   num2 = number %8;
   number /=8;
   
   num3 = number %8;
   number /=8;

   num4 = number %8;
   number /=8;

   num5 = number %8;
   number /=8;

   printf("That number in octal is: %d%d%d%d%d \n", num5, num4, num3, num2, num1 );

   return 0;
}  
