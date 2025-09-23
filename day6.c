Question 11 Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check even or odd
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
Question 12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check positive, negative, or zero using nested if–else
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else {
        if (num < 0) {
            printf("%d is negative.\n", num);
        } else {
            printf("The number is zero.\n");
        }
    }

    return 0;
}

