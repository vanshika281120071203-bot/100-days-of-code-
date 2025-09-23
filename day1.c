Question 1 Write a program to input two numbers and display their sum.
 #include <stdio.h>

int main() {
    int num1, num2, sum;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

Question 2 Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Perform operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // To avoid division by zero
    if (num2 != 0) {
        quotient = (float) num1 / num2;  // Typecast for decimal result
        printf("\nQuotient = %.2f\n", quotient);
    } else {
        printf("\nDivision by zero is not allowed!\n");
    }

    // Display results
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);

    return 0;
}

    

