Ques 41 Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, original, first, last, temp, digits = 0, divisor = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    last = num % 10;  // get last digit

    // Count total digits and find divisor for the first digit
    while (num >= 10) {
        num = num / 10;
        digits++;
        divisor = divisor * 10;
    }

    first = num;  // first digit

    // Remove first and last digits and swap them
    temp = original % divisor;          // remove first digit’s place
    temp = temp / 10;                   // remove last digit
    swapped = last * divisor + temp * 10 + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}


Ques 42 Write a program to check if a number is a perfect number.

  #include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find sum of all proper divisors
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    // Check if sum of divisors equals the number
    if (sum == num && num != 0)
        printf("%d is a Perfect Number.\n", num);
    else
        printf("%d is not a Perfect Number.\n", num);

    return 0;
}
