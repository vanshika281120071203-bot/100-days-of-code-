Question 17Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2;

    // Input coefficients
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Categorize roots
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and distinct: %.2lf , %.2lf\n", root1, root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal: %.2lf , %.2lf\n", root1, root2);
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2lf + %.2lfi , %.2lf - %.2lfi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

QUESTION 18 🔀
Q18 (Conditional Statements)
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

#include <stdio.h>

int main() {
    float percentage;
    char grade;

    // Input percentage
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    // Assign grade based on criteria
    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage < 90) {
        grade = 'B';
    } else if (percentage >= 70 && percentage < 80) {
        grade = 'C';
    } else if (percentage >= 60 && percentage < 70) {
        grade = 'D';
    } else if (percentage < 60 && percentage >= 0) {
        grade = 'F';
    } else {
        printf("Invalid percentage entered!\n");
        return 1; // Exit the program for invalid input
    }

    // Display the grade
    printf("Grade = %c\n", grade);

    return 0;
}
