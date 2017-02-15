#include<stdio.h>
#include <stdio.h>
int main()
{
    char word[80];
    int  num;
	int z =0;

    printf("Enter word: ");
    for(z = 0; z < 80 && word[z-1] != '\n'; z++){
        word[z] = getchar();
    }
    printf("Enter number: ");
    scanf("%i", &num);

    int n = 0, rotateSwap = 0;

    int i;
    for(i=0; word[i] != '\0'; i++)
     {
          if(word[i] >='a' && word[i] <='z')
             {
                n = 'z' - word[i];
                if( num > n )
                 {
                    rotateSwap = num - n - 1;
                    word[i] = 'a';
                    word[i] += num;
                  }  
               else
                word[i] += num;


               }
       }

      int j;
      for(j = 0; word[j] !='\0'; j++)
        {
             printf("%c", word[j]);
        }

        printf("\n");

        return 0;
}