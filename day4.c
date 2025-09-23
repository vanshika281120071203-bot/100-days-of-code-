Question 7 Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);

    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Display swapped values
    printf("After swapping:\n");
    printf("First number (a) = %d\n", a);
    printf("Second number (b) = %d\n", b);

    return 0;
}
 question 8 Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate sum using formula
    sum = n * (n + 1) / 2;

    // Display the result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}
