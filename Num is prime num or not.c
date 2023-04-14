#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (isPrime(n)) {
        printf("%d is a prime number.", n);
    } else {
        printf("%d is not a prime number.", n);
    }
    return 0;
}

