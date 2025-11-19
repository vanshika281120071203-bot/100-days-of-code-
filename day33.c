🔢
Q65 (Arrays (1D))
Search in a sorted array using binary search.


  #include <stdio.h>

int main() {
    int n, key;
    int low, high, mid;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &key);
    
    low = 0;
    high = n - 1;
    
    int found = 0;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (arr[mid] == key) {
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;  // search left half
        }
        else {
            low = mid + 1;   // search right half
        }
    }
    
    if (found)
        printf("Element found at index %d\n", mid);
    else
        printf("Element not found\n");
    
    return 0;
}


🔢
Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.



  #include <stdio.h>

int main() {
    int n, i, key, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100]; // bigger size to allow insertion

    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &key);

    // Find position to insert
    pos = n;  
    for (i = 0; i < n; i++) {
        if (key < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = key;

    n++;  // increase array size

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
