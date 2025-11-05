Ques 49 Write a program to print the following pattern:
5
45
345
2345
12345

  #include <stdio.h>

int main() {
    int i, j, start;

    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        start = i;  // Starting number for each row

        // Inner loop to print numbers from start to 5
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");  // Move to next line after each row
    }

    return 0;
}


Ques 50 Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

  #include <stdio.h>

int main() {
    int i, j, space;

    // Outer loop for rows
    for (i = 1; i <= 5; i++) {

        // Print leading spaces
        for (space = 1; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (j = 5; j >= i; j--) {
            printf("*");
        }

        printf("\n");  // Move to next line
    }

    return 0;
}
