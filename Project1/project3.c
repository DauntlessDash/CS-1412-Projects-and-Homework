#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define NAME_LEN 13

struct printjob {
  int number;
  char data[NAME_LEN+1];
  struct printjob *next;
};

struct printjob *next = NULL;   

void insert(void);
void print(void);
int read_line(char str[], int n);

int main(void)
{
	int k = 1;
	printf("-----------------------------------------------------------\n");
	printf("|    Welcome to the Otterbine Print-Management System!    |\n");
	printf("-----------------------------------------------------------\n\n");
	printf("Please enter printing jobs: \n\n");
    while(k == 1){
		insert();
	printf("Continue adding printing jobs? (1=yes / 0=no): ");
	scanf("%d", &k);
	printf("\n");
	}
	print();
}

void insert(void)
{
  struct printjob *cur, *prev, *new_node;

  new_node = malloc(sizeof(struct printjob));
  if (new_node == NULL) {
    printf("Error adding new printing job, queue is full. \n");
    return;
  }

  printf("Enter priority (0-9): ");
  scanf("%d", &new_node->number);

  for (cur = next, prev = NULL;
       cur != NULL && new_node->number > cur->number;
       prev = cur, cur = cur->next)
    ;

  printf("Enter print job data-string (Max 13 Characters): ");
  read_line(new_node->data, NAME_LEN);
 
  new_node->next = cur;
  if (prev == NULL)
    next = new_node;
  else
    prev->next = new_node;
	printf("\n");
}

void print(void)
{
  struct printjob *p;
  printf("Completing entered print jobs according to their priority ... \n\n");
  printf("Priority   data-string\n");
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 9){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 8){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 7){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 6){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 5){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 4){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 3){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 2){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 1){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
  for (p = next; p != NULL; p = p->next){
	  if (p->number == 0){
	  printf("%7d       %-25s\n", p->number, p->data);}
  }
    
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	while (isspace(ch = getchar()))
		;
	while (ch != '\n' && ch != EOF) {
		if (i < n)
			str[i++] = ch;
		ch = getchar();
	}
	str[i] = '\0';
	return i;
		
}