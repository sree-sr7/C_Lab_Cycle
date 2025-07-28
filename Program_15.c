// Program to read n strings and display them in ascending order @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[50][100];  
    char temp[100];     
    printf("Enter number of strings: ");
    scanf("%d", &n);
    getchar();                                      // Gets leftover newline after scanf
    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++) {
        fgets(str[i], sizeof(str[i]), stdin);
        str[i][strcspn(str[i], "\n")] = '\0';       // Removes trailing newline
    }
    // Sorting using Bubble Sort + strcmp
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    printf("\nStrings in Ascending Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
