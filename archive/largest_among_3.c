#include <stdio.h>

int main() {
    int a, b, c;
    int nums[3];

    printf("Enter a number: ");
    scanf("%d", &a);
    nums[0] = a;

    printf("Enter a number: ");
    scanf("%d", &b);
    nums[1] = b;

    printf("Enter a number: ");
    scanf("%d", &c);
    nums[2] = c;

    int nums_length = sizeof(nums) / sizeof(nums[0]);
    int largest_int;

    for (int i = 0; i < nums_length; i++) {
        if (nums[i] > largest_int) {
            largest_int = nums[i];
        }
    }

    printf("The length of the arr is %d and the largest is %d\n!", nums_length, largest_int);

    return 0;
}