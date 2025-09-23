Question 29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n;
    int factorial = 1; // Initialize factorial

    // Input a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate factorial using loop
    for(int i = 1; i <= n; i = i + 1) {
        factorial = factorial * i;
    }

    // Display result
    printf("Factorial of %d = %d\n", n, factorial);

    return 0;
}

Question 30 (Loops without Arrays/Strings)
Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reversed = 0, digit;

    // Input number
    printf("Enter an integer: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Use for loop to reverse the number
    for (; num != 0; num = num / 10) {
        digit = num % 10;            // Get last digit
        reversed = reversed * 10 + digit; // Append digit
    }

    // Display result
    printf("Reversed number of %d is %d\n", original, reversed);

    return 0;
}
