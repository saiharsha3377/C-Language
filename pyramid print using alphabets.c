#include <stdio.h>

int main() {
    int i, j, n = 5;
    char ch;
    for (i = 1; i <= n; i++) {
        ch = 'A' + i - 1;
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c", ch--);
        }
        ch = 'A' + i;
        for (j = 1; j < i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}

//output:

    A
   BAB
  CBABC
 DCBABCD
EDCBABCDE
