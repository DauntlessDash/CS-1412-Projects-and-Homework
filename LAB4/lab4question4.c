#define MAX 100
#include <stdio.h>
#include <ctype.h>

int main(void){
    char input[MAX] = {0};
    int i;
    
    printf("Enter message: ");
    
    for(i = 0; i < MAX && input[i-1] != '\n'; i++){
        input[i] = toupper( getchar() );
    }
    
    for(i = 0; i < MAX; i++){
        switch(input[i]){
            case 'A':
                input[i] = '4';
                break;
            case 'B':
                input[i] = '8';
                break;
            case 'E':
                input[i] = '3';
                break;
            case 'O':
                input[i] = '0';
                break;
            case 'S':
                input[i] = '5';
                break;
            case '\n':
                for(i; i < MAX - 1; i++)
                    input[i] = '!';
                input[MAX - 1] = '\n';
                goto out;
        }
    }
    
    out: printf("Translation: ");
    
    for(i = 0; i < MAX; i++){
        putchar(input[i]);
    }
    
    return 0; 
}