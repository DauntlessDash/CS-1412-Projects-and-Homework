#include <stdio.h>

int main(void)
{
    int num, den, x, y, z;

    printf("Enter a fraction: ");
    scanf("%d/%d", &num, &den);

    x = num;
    y = den;

    while (y != 0) {
        z = x % y;
        x = y;
        y = z;
    }

    num /= x;
    den /= x;

    printf("In lowest terms: %d/%d\n", num, den);

    return 0;
}