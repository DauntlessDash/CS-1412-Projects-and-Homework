#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

    void generate_random_walk(char walk[10][10]);
    void print_array(char walk[10][10]);

    int main(void)
    {
        char walk[10][10];
        generate_random_walk(walk);
        print_array(walk);
		
        return 0;
    }

    void generate_random_walk(char walk[10][10])
    {
        int i, j, k, move;
		const char path[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
 
		srand ((unsigned) time(NULL));
 
		for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		walk[i][j] = '~';
 
		i = 0;
		j = 0;    
		k = 1;
		
		walk[i][j] = path[0];  
		while (k < 26) {
		move = rand() % 4;
   
		if (walk[i][j] == '~')
		walk[i][j] = path[k++];  
		if ((walk[i][j + 1] != '~' || j == 10 - 1 )&& (walk[i + 1][j] != '~' || i == 10 -1) && (walk[i - 1][j] != '~' || i == 0) && (walk[i][j - 1] != '~' || j == 0))
		break;
			switch (move) {
			case 0: if (j < 10 - 1 && walk[i][j + 1] == '~'){  
              j++;
              break;     }
			case 1: if (i < 10 -1 && walk[i + 1][j] == '~') {  
              i++;
              break; }
			case 2: if (i > 0 && walk[i - 1][j] == '~'){  
              i--;
              break;  }    
			case 3: if (j > 0 && walk[i][j - 1] == '~') { 
              j--;
              break; }
}
}
    }

    void print_array(char walk[10][10])
    {
		int i, j;
       for (i = 0; i < 10; i++) 
	   {
		for (j = 0; j < 10; j++)
		printf ("%4c", walk[i][j]);
		printf ("\n");
        }
    }