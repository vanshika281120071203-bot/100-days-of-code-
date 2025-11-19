🔢
Q63 (Arrays (1D))
Merge two arrays.


  #include <stdio.h>

int main() {
    int n1, n2, i, j;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter %d elements of first array: ", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter %d elements of second array: ", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2];

    // Copy first array
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy second array
    for (j = 0; j < n2; j++) {
        merged[n1 + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}


🔢
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.


#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};   // to count frequency of digits 0–9
    int digit, maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // If number is negative, make it positive
    if (num < 0)
        num = -num;

    // Count digit frequencies
    if (num == 0) {
        freq[0] = 1; // special case
    } else {
        while (num > 0) {
            digit = num % 10;    // extract digit
            freq[digit]++;       // increase frequency
            num /= 10;           // remove last digit
        }
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit that occurs the most: %d\n", mostFreqDigit);
    printf("It occurs %d times\n", maxFreq);

    return 0;
}
