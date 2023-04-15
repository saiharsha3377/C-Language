#include <stdio.h>

int main() {
    int i, j, n = 5, k = 9;
    for (i = 1; i <= n; i++, k -= 2) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 1; j <= k; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//output:

*********
 *******
  *****
   ***
    *

