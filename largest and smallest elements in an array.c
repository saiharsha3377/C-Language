#include <stdio.h>

int main() {
    int arr[] = {1, 5, 3, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int smallest = arr[0];

    for (int i=1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element in array: %d\n", largest);
    printf("Smallest element in array: %d\n", smallest);

    return 0;
}

