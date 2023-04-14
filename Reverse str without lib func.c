#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reverse of the string: %s", str);
    return 0;
}
