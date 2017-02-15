#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int ch;
    int word = 0;
    int let = 0;
    bool prev = true; 

    printf("Enter a sentence: ");
    while ((ch = getchar()) != EOF && ch != '\n')
    {
        if (ch == ' ')
            prev = true;
        else
        {
            if (prev)
                word++;
            prev = false;
            let++;
        }
    }

    if (word > 0)
    {
        double avg = let / (float)(word);
        printf("Average word length: %.1f \n", avg);
    }
    else
        printf("You didn't enter any words\n");
    return 0;
}