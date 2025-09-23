Question 27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;
    int odd = 1; // first odd number

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Sum the first n odd numbers
    for(int i = 1; i <= n; i++) {
        sum = sum + odd; // add odd number to sum
        odd = odd + 2;   // next odd number
    }

    // Display result
    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}

Question 28 Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    long long product = 1; // Use long long to handle large products

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for(int i = 2; i <= n; i = i + 2) {
        product = product * i;
    }

    // Display result
    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
