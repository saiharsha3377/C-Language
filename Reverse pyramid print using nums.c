#include <stdio.h>

int main() {
    int i, j, k, n = 5;
    for (i = n; i >= 1; i--) {
        k = i;
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
