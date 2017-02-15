#include <stdio.h>

int main(){
    char  z, ch[80], *t, *k;
    t = k = ch;
    printf("Enter text to check for palindrome: ");

    do{
        scanf("%c", &z);
    
        if(z >= 'A' && z <= 'Z')
            *(t++) = z;
        if(z >= 'a' && z <= 'z')
            *(t++) = z - ('a' - 'A');
    }while(z != '\n');

    while(k < t--){
        if(*t != *(k++)){
            printf("This is not a palindrome.\n");
            return 0;
        }
    }
    
    printf("This is a palindrome.\n");
    return 0;
}