🔲
Q71 (2D Arrays)
Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[100][100];   // large enough size

    printf("Enter elements of the %d x %d matrix:\n", rows, cols);

    // Reading matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


🔲
Q72 (2D Arrays)
Find the sum of all elements in a matrix.


#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows: ");
    scanf("%d", &r);

    printf("Enter columns: ");
    scanf("%d", &c);

    int mat[r][c];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sum = 0;

    // Calculate sum
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}

