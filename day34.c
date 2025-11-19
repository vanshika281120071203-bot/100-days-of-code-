🔢
Q67 (Arrays (1D))
Insert an element in an array at a given position.


  #include <stdio.h>

int main() {
    int n, pos, element, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];  // larger size to allow insertion

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to insert (1-based index): ");
    scanf("%d", &pos);

    printf("Enter element to insert: ");
    scanf("%d", &element);

    // Shift elements to the right
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element at position
    arr[pos - 1] = element;

    n++;  // increase size

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



Q68 (Arrays (1D))
Delete an element from an array.


#include <stdio.h>

int main() {
    int n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (1-based index): ");
    scanf("%d", &pos);

    // Shift elements to left
    if (pos < 1 || pos > n) {
        printf("Invalid position!");
        return 0;
    }

    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // reduce size

    printf("Array after deletion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
