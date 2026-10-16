#include <stdio.h>
#include <stdbool.h>

int main() {

    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    bool is_leap_year = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    if (is_leap_year) {
        printf("%d is a leap year!\n", year);
    } else {
        printf("%d is not a leap year!\n", year);
    }

    return 0;
}