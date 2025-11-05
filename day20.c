Ques 39 Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;
    int hasOdd = 0;  // to check if any odd digit exists

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;     // extract last digit
        if (digit % 2 != 0) { // check if digit is odd
            product = product * digit;
            hasOdd = 1;       // mark that we found an odd digit
        }
        num = num / 10;       // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits present.\n");

    return 0;
}

Ques 40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long bin, ones = 0, place = 1;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &bin);

    // Loop to calculate 1's complement
    while (bin > 0) {
        digit = bin % 10;    // extract last binary digit
        if (digit == 0)
            ones = ones + 1 * place;   // complement of 0 is 1
        else
            ones = ones + 0 * place;   // complement of 1 is 0

        bin = bin / 10;      // remove last digit
        place = place * 10;  // move to next position
    }

    printf("1's Complement = %lld\n", ones);

    return 0;
}
