#include <stdio.h>

char* positive_negative_zero(int num) {
    if (num < 0) {
        return "negative";
    } else if (num > 0) {
        return "positive";
    } else {
        return "zero";
    }
    
}

int main() {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number you've typed is %s!\n", positive_negative_zero(num));

    return 0;
}