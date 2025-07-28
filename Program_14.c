// Program to reverse a string in the same array @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    char temp;
    printf("Enter a string:\n");
    fgets(str, sizeof(str), stdin);
    // Remove newline character from fgets if present
    int len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    i = 0;
    j = len - 1;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reversed string is: %s\n", str);
    return 0;
}
