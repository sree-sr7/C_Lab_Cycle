// Program to perform Addition and Subtraction of Two Matrices @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>

void readMatrix(int m[10][10], int r, int c) {
    printf("Enter elements (%d x %d):\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void displayMatrix(int m[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }
}

void addMatrix(int a[10][10], int b[10][10], int res[10][10], int r, int c) {           // Function for Addition of Matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];
}

void subMatrix(int a[10][10], int b[10][10], int res[10][10], int r, int c) {           // Function for Subtraction of Matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] - b[i][j];
}

int main() {
    int a[10][10], b[10][10], result[10][10];
    int r, c, ch;

    printf("Enter number of rows and columns:\n");
    scanf("%d%d", &r, &c);

    printf("Enter Matrix A:\n");
    readMatrix(a, r, c);

    printf("Enter Matrix B:\n");
    readMatrix(b, r, c);

    while (1) {
        printf("\nChoose Operation:\n1. Addition\n2. Subtraction\n3. Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                addMatrix(a, b, result, r, c);
                printf("Result of Addition:\n");
                displayMatrix(result, r, c);
                break;
            case 2:
                subMatrix(a, b, result, r, c);
                printf("Result of Subtraction:\n");
                displayMatrix(result, r, c);
                break;
            case 3:
                printf("Exiting Program\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
