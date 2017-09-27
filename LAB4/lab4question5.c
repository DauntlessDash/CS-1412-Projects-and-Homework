#include<stdio.h>
#include <ctype.h>

int main()
{
int ch;
char sentence[200]; 
char word[10] = {'\0','\0','\0','\0','\0','\0','\0','\0','\0'}; 
int i = 0; 
int w = 9; 
char term = '\0';
printf("Enter a sentence:");
   while  ( (ch=getchar()) != '\n' )
       {
       if ( ch == '.' || ch == '?' || ch == '!')
          term = ch;
       else
         {
         sentence[i] = ch;
         i++;
         }

       }
       sentence[i] = '\0';


    int x;
    for ( x=i ; x >= 0 ; x-- )
        {
           if ( sentence[x] == ' ' )
           {
            printf(" ");
            printf("%c",word[0]); 
            printf("%c",word[1]);
            printf("%c",word[2]);
            printf("%c",word[3]);
            printf("%c",word[4]);
            printf("%c",word[5]);
            printf("%c",word[6]);
            printf("%c",word[7]);
            printf("%c",word[8]);
            printf("%c",word[9]);
            w = 9 ;
            word[0] = '\0'; 
            word[1] = '\0';
            word[2] = '\0';
            word[3] = '\0';
            word[4] = '\0';
            word[5] = '\0';
            word[6] = '\0';
            word[7] = '\0';
            word[8] = '\0';
            word[9] = '\0';

           }
           else 
           {
            word[w] = sentence[x];
            w--;

           }
         }

    printf("%c",word[0]);
    printf("%c",word[1]);
    printf("%c",word[2]);
    printf("%c",word[3]);
    printf("%c",word[4]);
    printf("%c",word[5]);
    printf("%c",word[6]);
    printf("%c",word[7]);
    printf("%c",word[8]);
    printf("%c",word[9]);



if ( term != '\0' ) 
    printf("%c",term);

    printf("\n");
    printf("\n");
return 0;
}