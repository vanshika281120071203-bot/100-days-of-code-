Ques 31 Write a program to take a number as input and print its equivalent binary representation.

  #include <stdio.h>

int main() {
    int num, n, bit;
    long long binary = 0;
    long long place = 1; // to hold positional value like 1, 10, 100...

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;

    // If number is 0
    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Loop to get binary digits
    while (n > 0) {
        bit = n % 2;         
   // Get remainder (0 or 1)
        binary = binary + bit * place;  // Build binary number
        n = n / 2;             // Divide number by 2
        place = place * 10;    // Move to next position
    }

    printf("Binary representation of %d is: %lld\n", num, binary);

    return 0;
}

Ques 32 Write a program to check if a number is a palindrome.

  #include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number using loop
    while (num > 0) {
        digit = num % 10;              // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number
        num = num / 10;                // Remove last digit
    }

    // Check if palindrome
    if (original == reversed)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
