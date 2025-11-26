🔲
Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.


  #include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    // Input matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate row sums
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        rowSum[i] = sum;
    }

    // Print row sums
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}


🔲
Q74 (2D Arrays)
Find the transpose of a matrix.


#include <stdio.h>

int main() {
    int rows, cols;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    // Input matrix elements
    printf("\nEnter elements of matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Printing transpose matrix
    printf("\nTranspose of matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
