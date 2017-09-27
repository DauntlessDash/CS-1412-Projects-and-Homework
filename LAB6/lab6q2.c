#include <stdio.h>
#define MAX_DIGITS 10

char one[MAX_DIGITS*4];
char two[MAX_DIGITS*4];
char three[MAX_DIGITS*4];

void clear_digits_array(void){
    int j=0;
	for(j=0;j<MAX_DIGITS*4;j++){
            one[j]='\0';
        }
	for(j=0;j<MAX_DIGITS*4;j++){
            two[j]='\0';
        }
	for(j=0;j<MAX_DIGITS*4;j++){
            three[j]='\0';
        }
    
}
void process_digit(int number, int a){
    if(number==0)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]=' ';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]='|';
		three[(4*a)+1]='_';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==1)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]=' ';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]=' ';
		two[(4*a)+1]=' ';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]=' ';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==2)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]=' ';
		two[(4*a)+1]='_';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]='|';
		three[(4*a)+1]='_';
		three[(4*a)+2]=' ';
		three[(4*a)+3]=' ';
	}
	if(number==3)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]=' ';
		two[(4*a)+1]='_';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]='_';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==4)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]=' ';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]='_';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]=' ';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==5)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]='_';
		two[(4*a)+2]=' ';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]='_';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==6)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]='_';
		two[(4*a)+2]=' ';
		two[(4*a)+3]=' ';
		three[(4*a)]='|';
		three[(4*a)+1]='_';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==7)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]=' ';
		two[(4*a)+1]=' ';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]=' ';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==8)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]='_';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]='|';
		three[(4*a)+1]='_';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
	if(number==9)
	{
		one[(4*a)]=' ';
		one[(4*a)+1]='_';
		one[(4*a)+2]=' ';
		one[(4*a)+3]=' ';
		two[(4*a)]='|';
		two[(4*a)+1]='_';
		two[(4*a)+2]='|';
		two[(4*a)+3]=' ';
		three[(4*a)]=' ';
		three[(4*a)+1]=' ';
		three[(4*a)+2]='|';
		three[(4*a)+3]=' ';
	}
} 
void print_digits_array(void){
    int a=0,b=0;
    for(a=0;a<(MAX_DIGITS*4);a++){
            printf("%c",one[a]);
    }
	printf("\n");
	for(a=0;a<(MAX_DIGITS*4);a++){
            printf("%c",two[a]);
    }
	printf("\n");
	for(a=0;a<(MAX_DIGITS*4);a++){
            printf("%c",three[a]);
    }
    printf("\n");
}
int main(void) {
	int a = 0;
	int b = 0;
    char ch='\0';
	int number=MAX_DIGITS;
	clear_digits_array();
    printf("Enter a number:");
    while ((ch=getchar())!='\n') {
        switch(ch){
            case '0': number=0;
                break;
            case '1': number=1;
                break;
            case '2': number=2;
                break;
            case '3': number=3;
                break;
            case '4': number=4;
                break;
            case '5': number=5;
                break;
            case '6': number=6;
                break;
            case '7': number=7;
                break;
            case '8': number=8;
                break;
            case '9': number=9;
                break;
            default: b=1;
        }
		if(b==0)
		{
            process_digit(number,a);
            a++;
		}
       b=0;
    }
    print_digits_array(); 
    return 0; 
}