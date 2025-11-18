
Q51 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
    5
   45
  345
 2345
12345
  
  #include <stdio.h>
  int main() {
    for (int i = 5; i >= 1; i--) {

        // Print leading spaces
        for (int s = 1; s < i; s++) {
            printf(" ");
        }

        // Print numbers from i to 5
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }
    return 0;
}


🔄
Q52 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*


  #include <stdio.h>

int main() {

    int rows[] = {1, 3, 5, 3, 1};   // star counts for each block

    for (int i = 0; i < 5; i++) {

        // print stars for the current block
        for (int j = 0; j < rows[i]; j++) {
            printf("*\n");
        }

        // print blank line after each block except the last
        if (i != 4)
            printf("\n");
    }

    return 0;
}
