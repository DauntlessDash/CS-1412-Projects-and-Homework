#include <stdio.h>
#include <ctype.h>
  
int main()
{
    char first, last,x,y,soak
	;
     
    printf("Enter your first and last name: ");
     
    while ((first = getchar()) == ' ')
        soak=first;                     
 
    x=toupper(first);                             
 
    while(first != ' ')
        first = getchar();                 
    while ((last = getchar()) == ' ')
        soak=last;                      
 
    y=toupper(last);                              
 
    while(last != '\n' && last != ' ')
    {
        printf("%c", last);
        last=getchar();
    }
 
    printf(", %c", x);
 
    getchar();getchar();
    return 0;
}