🔄
Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.

  #include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {   // check each number from 2 to n
        int isPrime = 1;            // assume prime

        // check divisibility
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                isPrime = 0;        // not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}


🔢
Q56 (Arrays (1D))
Read and print elements of a one-dimensional array.


  #include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // array declaration

    // reading elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // printing elements
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
