#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float e = 1;
    int input, i, j;

    printf("Enter an integer: ");
    scanf("%d", &input);

    for(i=1; i<=input; i++)
{
    int result = 1;
    for(int j=1; j<=i; j++)
    {
        result = result * j;
    }
  
    e += 1 / (float)result;
}

    printf("e equals %f\n", e);
    return 0;
}