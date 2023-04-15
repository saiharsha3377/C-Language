#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Array before swapping: ");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    swap(&arr[0], &arr[4]); // swap first and last elements

    printf("\nArray after swapping: ");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

