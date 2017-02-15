#include <stdio.h>
int main ()
{

   int one, two, three, four, five, six, seven, eight, nine, ten ,eleven, tweleve, thirteen, fourteen, fifteen, sixteen; 
   int rowa, rowb, rowc, rowd, cola, colb, colc, cold, diaga, diagb;

   printf("Enter the numbers 1 through 16 in any order, seperated by spaces: \n");
   scanf(" %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten ,&eleven, &tweleve, &thirteen, &fourteen, &fifteen, &sixteen); 
 
   printf(" %d %d %d %d\n", one, two, three, four );
   printf(" %d %d %d %d\n", five, six, seven, eight );
   printf(" %d %d %d %d\n", nine, ten, eleven, tweleve );
   printf(" %d %d %d %d\n", thirteen, fourteen, fifteen, sixteen );
   
   rowa = one + two + three + four;
   rowb = five + six + seven + eight;
   rowc = nine + ten + eleven + tweleve;
   rowd = thirteen + fourteen + fifteen + sixteen;
   printf( "Row Sums: %d %d %d %d \n", rowa, rowb, rowc, rowd);

   cola = one + five + nine + thirteen;
   colb = two + six + ten + fourteen;
   colc = three + seven + eleven + fifteen;
   cold = four + eight + tweleve + sixteen;
   printf( "Column Sums: %d %d %d %d \n", cola, colb, colc, cold);

   diaga = one + six + eleven + sixteen;
   diaga = four + seven + ten + thirteen;
   printf( "Diagonal Sums: %d %d \n", diaga, diagb );



   return 0;
}  
