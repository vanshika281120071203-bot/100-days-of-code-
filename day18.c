Ques 35 Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop to find and print all factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {   // if remainder is 0, i is a factor
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}


Ques 36 Write a program to find the HCF (GCD) of two numbers.

  #include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the smaller number
    int min = (num1 < num2) ? num1 : num2;

    // Loop to find HCF
    for (i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;  // store highest common factor found so far
        }
    }

    printf("HCF (GCD) of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
