Question 21 Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main() {
    int month;

    // Input month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Display month name and number of days using switch-case
    switch(month) {
        case 1:
            printf("January: 31 days\n");
            break;
        case 2:
            printf("February: 28 or 29 days\n");
            break;
        case 3:
            printf("March: 31 days\n");
            break;
        case 4:
            printf("April: 30 days\n");
            break;
        case 5:
            printf("May: 31 days\n");
            break;
        case 6:
            printf("June: 30 days\n");
            break;
        case 7:
            printf("July: 31 days\n");
            break;
        case 8:
            printf("August: 31 days\n");
            break;
        case 9:
            printf("September: 30 days\n");
            break;
        case 10:
            printf("October: 31 days\n");
            break;
        case 11:
            printf("November: 30 days\n");
            break;
        case 12:
            printf("December: 31 days\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
    }

    return 0;
}

Question 22 Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, amount;
    float percentage;

    // Input cost price and selling price
    printf("Enter Cost Price (CP): ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price (SP): ");
    scanf("%f", &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        amount = sellingPrice - costPrice;
        percentage = (amount / costPrice) * 100;
        printf("Profit = %.2f\n", amount);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        amount = costPrice - sellingPrice;
        percentage = (amount / costPrice) * 100;
        printf("Loss = %.2f\n", amount);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
