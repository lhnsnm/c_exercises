#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return celsius * 1.8 + 32;
}

int main() {
    float temp = celsius_to_fahrenheit(100);
    printf("Celsius is %.2f\n", (temp - 32) / 1.8);
    printf("Fahrenheit is %.2f\n", temp);
    return 0;
}