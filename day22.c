Ques 43 Write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, original, digit, sum = 0, fact, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Loop to find sum of factorials of digits
    while (num > 0) {
        digit = num % 10;    // extract last digit
        fact = 1;

        // find factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;    // add factorial to sum
        num = num / 10;      // remove last digit
    }

    // Check if number is strong
    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}


Ques 44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n, i;
    float num = 1.0, den = 2.0, sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate sum of series
    for (i = 1; i <= n; i++) {
        sum = sum + (num / den);
        num = num + 2;   // numerator increases by 2 each time
        den = den + 2;   // denominator increases by 2 each time
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
