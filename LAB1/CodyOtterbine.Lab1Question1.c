#include <stdio.h>
int main ()
{
   int money, tw, tn, fv, on,temp; 
   
   printf("Enter a dollar ammount\n");
   scanf("%d", &money); 

   tw = money / 20;   
   money = money % 20;
   tn = money / 10;
   money = money % 10;
   fv = money / 5;
   money = money % 5;
   on = money;

   printf(" $20 bills: %d \n", tw);
 printf(" $10 bills: %d \n", tn);
   printf(" $5 Bills: %d \n", fv);
   printf(" $1 bills: %d \n", on);

   return 0;
}
