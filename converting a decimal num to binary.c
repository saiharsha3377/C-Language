#include <stdio.h>

int main() {
    int decimalNumber, binaryNumber[32], index = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    while (decimalNumber > 0) {
        binaryNumber[index] = decimalNumber % 2;
        decimalNumber /= 2;
        index++;
    }

    printf("Binary number: ");

    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binaryNumber[i]);
    }

    return 0;
}

