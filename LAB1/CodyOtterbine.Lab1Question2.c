#include <stdio.h>
int main ()
{

   int in, mm, dd, yy; 
   float up;
 
   printf("Enter item number: \n");
   scanf("%d", &in); 

   printf("Enter unit price: \n");
   scanf("%f", &up); 
   
   printf("Enter purchase date (mm/dd/yy): \n");
   scanf("%d/%d/%d", &mm, &dd, &yy);

   printf(" Item		Unit		Purchase\n");
   printf("    			Price		Date \n"); 
   printf(" %3d			$ %5.2f		%2d/%2d/%2d \n", in, up, mm, dd, yy);

   return 0;
}  
