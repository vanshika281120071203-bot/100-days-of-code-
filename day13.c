Question 25 Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result; // For integer operations
    float divisionResult; // For division

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Input operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Space before %c to consume newline

    // Perform calculation based on operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (num2 != 0) {
                divisionResult = (float)num1 / num2; // Typecast to get decimal result
                printf("Result: %.2f\n", divisionResult);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}

Question 26 Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
