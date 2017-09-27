#include <stdio.h>
int main ()
{

   int number, count; 
 
   printf("Enter a number:  \n");
   scanf("%d", &number);
  
   while(number!=0)
   {
	number/=10;
	++count;
   }

   printf("Number of digits: %d", count);

   return 0;
}  
