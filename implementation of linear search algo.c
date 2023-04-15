#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[100], n, key, pos;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    pos = linear_search(arr, n, key);

    if (pos == -1) {
        printf("%d not found in the array\n", key);
    } else {
        printf("%d found at index %d in the array\n", key, pos);
    }

    return 0;
}

