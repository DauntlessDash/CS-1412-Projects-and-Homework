#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

int main (void) {
 
int i, j, k, move;
const char path[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char board[10][10];
 
srand ((unsigned) time(NULL));
 
for (i = 0; i < 10; i++)
  for (j = 0; j < 10; j++)
    board[i][j] = '~';
 
i = 0;
j = 0;    
k = 1;
board[i][j] = path[0];  
while (k < 26) {
  move = rand() % 4;
   
if (board[i][j] == '~')
board[i][j] = path[k++];  
if ((board[i][j + 1] != '~' || j == 10 - 1 )&& (board[i + 1][j] != '~' || i == 10 -1) && (board[i - 1][j] != '~' || i == 0) && (board[i][j - 1] != '~' || j == 0))
break;
    switch (move) {
      case 0: if (j < 10 - 1 && board[i][j + 1] == '~'){  
              j++;
              break;     }
      case 1: if (i < 10 -1 && board[i + 1][j] == '~') {  
              i++;
              break; }
      case 2: if (i > 0 && board[i - 1][j] == '~'){  
              i--;
              break;  }    
      case 3: if (j > 0 && board[i][j - 1] == '~') { 
              j--;
              break; }
}
}
for (i = 0; i < 10; i++) {
  for (j = 0; j < 10; j++)
    printf ("%4c", board[i][j]);
  printf ("\n");
}
 
return 0;
 
}