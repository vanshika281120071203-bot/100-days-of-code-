Ques 33 Write a program to check if a number is an Armstrong number.

  #include <stdio.h>
#include <math.h>

int main() {
    int num, original, n, count = 0, digit;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    n = num;

    // Step 1: Count number of digits
    while (n > 0) {
        n = n / 10;
        count++;
    }

    n = num;

    // Step 2: Calculate sum of digits raised to the power of count
    while (n > 0) {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    }

    // Step 3: Check Armstrong condition
    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

Ques 34 Write a program to check if a number is prime.


#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // 0 and 1 are not prime numbers
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility using loop
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            flag = 1;  // number is divisible → not prime
            break;
        }
    }

    // Check result
    if (flag == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
