#include <stdio.h>
int main ()
{

   int num, num2, num3, num4 count; 
 
   printf("Enter four integers:  \n");
   scanf("%d %d %d %d", &num, &num2, &num3, &num4);
  
   count = num;

   if(num > num2 && num > num3 && num > num4)
	printf("Largest: %d", num);

   else if(num2 > num && num2 > num3 && num2 > num4)
	printf("Largest: %d", num2);

   else if(num3 > num && num3 > num2 && num3 > num4)
	printf("Largest: %d", num3);

   else if(num4 > num && num4 > num2 && num4 > num3)
	printf("Largest: %d", num4);


   return 0;
}  
