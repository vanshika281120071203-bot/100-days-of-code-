Ques 45 Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

  #include <stdio.h>

int main() {
    int n, i;
    float num = 2.0, den = 3.0, sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Loop to calculate the sum of the series
    for (i = 1; i <= n; i++) {
        sum = sum + (num / den);   // Add each term
        num = num + 2;             // Numerator increases by 2 each term
        den = den + 4;             // Denominator increases by 4 each term
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}

Ques 46 Write a program to print the following pattern:
*****
*****
*****
*****
*****

  #include <stdio.h>

int main() {
    int i, j;

    // Outer loop for number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for number of columns
        for (j = 1; j <= 5; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
