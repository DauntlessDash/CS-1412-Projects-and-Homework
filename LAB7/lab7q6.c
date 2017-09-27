#include <stdio.h>

double compute_average_word_length(const char *sentence)
{
  int w = 0, l = 0;
  char ch, prev = ' ';

  do {
    ch = *sentence;
    if (ch  != ' ' && ch != '\0')
      l++;
    else if (prev != ' ') 
      w++;
    prev = ch;
  } while (*sentence++ != '\0');

  return (double) l / w;
}

int read(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
int main(void)
{
  char sentence[100 + 1];

  printf("Enter a sentence: ");
  read(sentence, 100);

  printf("Average  word length: %.1f\n",  compute_average_word_length(sentence));

  return 0;
}

