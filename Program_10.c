// Program to find the transpose of a matrix @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>

int main() {
    int a[10][10], trans[10][10];
    int r, c;

    printf("Enter number of rows and columns of the matrix:\n");
    scanf("%d %d", &r, &c);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {                   // Transposing the matrix
        for (int j = 0; j < c; j++) {
            trans[j][i] = a[i][j];
        }
    }

    printf("Original Matrix:\n");                   
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the Matrix:\n");           // Displays the transposed matrix
    for (int i = 0; i < c; i++) {  
        for (int j = 0; j < r; j++) {
            printf("%d\t", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
