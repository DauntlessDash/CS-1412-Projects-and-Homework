#include <stdio.h>

int main(void)
{
    float max = 0, num;

    do{
        printf("Enter number:");
        if(scanf(" %f", &num) == 1) 
		{
            if(num > max){
                max = num;
            }
        }
    }
    while(num > 0);

   printf("Largest number entered was: %f", max);

   return 0;
}