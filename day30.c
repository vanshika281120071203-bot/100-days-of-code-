🔢
Q59 (Arrays (1D))
Count even and odd numbers in an array.


  #include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Count of even numbers = %d\n", even);
    printf("Count of odd numbers = %d\n", odd);

    return 0;
}


🔢
Q60 (Arrays (1D))
Count positive, negative, and zero elements in an array.


 #include <stdio.h>

int main() {
    int n, i;
    int pos = 0, neg = 0, zero = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive numbers = %d\n", pos);
    printf("Negative numbers = %d\n", neg);
    printf("Zeroes = %d\n", zero);

    return 0;
}
