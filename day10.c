
 Question 19 Write a program to classify a triangle as Equilateral, Isosceles
#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides of the triangle
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First, check if the sides form a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        // Classify the triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}


Question 20 Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int day;

    // Input a number
    printf("Enter a number (1-7): ");
    scanf("%d", &day);

    // Display the corresponding day using switch-case
    switch(day) {
        case 1:
            printf("Day 1: Sunday\n");
            break;
        case 2:
            printf("Day 2: Monday\n");
            break;
        case 3:
            printf("Day 3: Tuesday\n");
            break;
        case 4:
            printf("Day 4: Wednesday\n");
            break;
        case 5:
            printf("Day 5: Thursday\n");
            break;
        case 6:
            printf("Day 6: Friday\n");
            break;
        case 7:
            printf("Day 7: Saturday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}

