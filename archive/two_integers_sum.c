#include <stdio.h>

int main () {
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    printf("The total of the two integer is %d!\n", a + b);

    return 0;
}