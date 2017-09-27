#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int stack[100];
int top;


void push(int op);
char pop(void);
void subtract(void);
void divide(void);
void exitov(void);
void under(void);


int main(void)
{
  char ch;
  int value;

  for (;;) {
    printf("Enter an RPN expression: ");
    for (;;) {
      scanf(" %1c", &ch);

      if (ch >= '0' && ch <= '9')
        push((int) ch - '0');
      else if ( ch == '+')
        push(pop() + pop());
      else if ( ch == '-')
        subtract();
      else if ( ch == '*')
        push(pop() * pop());
      else if ( ch == '/')
        divide();
      else
        break;
    }

    if (ch == '=') {
      value = pop();
      if (top==0) {
        printf("Value: %d\n",  value);
      } else {
        fprintf(stderr, "Incomplete expression\n");
      }
    } else {
      
      break;
    }
  }

  return 0;
}

void push(int op)
{
  if (top == 100)
    exitov();
  stack[top++] = op;
}
char pop(void)
{
  if (top == 0)
    under();
  return stack[--top];
}
void exitov(void)
{
  fprintf(stderr, "Expression is too complex.\n");
  exit(EXIT_FAILURE);
}
void under(void)
{
  fprintf(stderr, "Not enough operands in expression\n");
  exit(EXIT_FAILURE);
}
void subtract(void)
{
  int sub = pop();
  int min = pop();

  push(min - sub);
}
void divide(void)
{
  int divis = pop();
  int dend = pop();

  push(dend / divis);
}