#include <stdio.h>
#include <stdbool.h>

char* odd_or_even(int num) {
    printf("Is %d, odd or even?\n", num);
    bool is_odd = num % 2 != 0;
    if (is_odd) {
        return "odd\n";
    }
    return "even\n";
}

int main() {
    printf("%s", odd_or_even(443231));
    printf("%s", odd_or_even(843842));
    printf("%s", odd_or_even(54));
    printf("%s", odd_or_even(333));
    printf("%s", odd_or_even(1));
    
    return 0;
}