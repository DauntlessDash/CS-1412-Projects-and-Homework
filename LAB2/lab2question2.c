#include <stdio.h>
int main ()
{

   int number, num1, num2, num3, num4, num5, i1, i2, i3, i4, i5, first_sum, second_sum, total; 
 
   printf("Enter the first 11 digits of a UPC: \n");
   scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &number, &num1, &num2, &num3, &num4, &num5, &i1, &i2, &i3, &i4, &i5);
  
   first_sum = number + num2 + num4 + i1 + i3 + i5;
   second_sum = num2 + num3 + num5 + i2 + i4;
   total = 3* first_sum + second_sum;

   printf("Check digit: %d\n", 9 - ((total - 1) % 10));

   return 0;
}  
