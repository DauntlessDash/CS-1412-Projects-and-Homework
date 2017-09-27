#include <stdio.h>

void test(int a[], int n, int *max, int *min)
{
int *i;
*max = *min = a[0];
for (i=&a[0]; i<&a[n]; i++) 

{
    if(*i>*max)
    *max=*i;
    else if (*i<*min)
    *min=*i;
}}
int main(void)
{
int b[10], *i, large, small;

printf("Enter 10 numbers then hit Enter: \n",10);
for(i=&b[0];i<&b[10];i++)
    scanf("%d",i);

test(b, 10, &large, &small);

printf("\nlargest:\n%d",large);
printf("\nsmallest:\n%d \n",small);

return 0;
}

