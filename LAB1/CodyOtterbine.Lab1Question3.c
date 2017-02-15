#include <stdio.h>
int main ()
{

   int first, second, third; 
 
   printf("Enter phone number in format (xxx) xxx-xxxx \n");
   scanf("(%d) %d-%d", &first, &second, &third);

   printf("You entered:  %d.%d.%d \n", first, second, third);

   return 0;
}  
