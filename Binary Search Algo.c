#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n-1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 55;
    int result = binarySearch(arr, n, key);
    if (result == -1) {
        printf("Element not found.");
    } else {
        printf("Element found at index %d.", result);
    }
    return 0;
}
