Question 23 Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    // Input number of late days
    printf("Enter number of days late: ");
    scanf("%d", &lateDays);

    // Calculate fine based on late days
    if (lateDays <= 0) {
        fine = 0;
        printf("No fine.\n");
    } else if (lateDays <= 5) {
        fine = lateDays * 2; // ₹2 per day for first 5 days
        printf("Fine = ₹%d\n", fine);
    } else if (lateDays <= 10) {
        fine = 5 * 2 + (lateDays - 5) * 4; // ₹2/day for first 5 days, ₹4/day for next 5
        printf("Fine = ₹%d\n", fine);
    } else if (lateDays <= 30) {
        fine = 5 * 2 + 5 * 4 + (lateDays - 10) * 6; // ₹6/day for next 20 days
        printf("Fine = ₹%d\n", fine);
    } else {
        printf("Membership Cancelled.\n");
    }

    return 0;
}

Question 24  (Conditional Statements)
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input number of units consumed
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    // Calculate bill based on units
    if (units <= 100) {
        bill = units * 5; // ₹5 per unit for first 100 units
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7; // ₹7 per unit for next 100 units
    } else if (units <= 300) {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10; // ₹10 per unit for next 100 units
    } else {
        bill = 100 * 5 + 100 * 7 + 100 * 10 + (units - 300) * 12; // ₹12 per unit for above 300 units
    }

    // Display the bill
    printf("Electricity Bill = ₹%.2f\n", bill);

    return 0;
}

