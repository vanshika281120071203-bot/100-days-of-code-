Ques 37 Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // The LCM must be >= the larger number
    max = (num1 > num2) ? num1 : num2;

    // Loop to find LCM
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;  // keep checking next number
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);

    return 0;
}

Ques 38 Write a program to find the sum of digits of a number.

  #include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract and add digits
    while (num > 0) {
        digit = num % 10;     // Get the last digit
        sum = sum + digit;    // Add it to sum
        num = num / 10;       // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
