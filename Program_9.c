// Program to perform multiplication of two matrices @Sreeraj Sreekumar
// 28th July 2025

#include <stdio.h>

int main() {
    int a[10][10], b[10][10], result[10][10];
    int m, n, p, q;

    // Input matrix dimensions
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d%d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication not possible (columns of A ≠ rows of B)\n");
        return 0;
    }

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix Multiplication 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Output Resultant Matrix
    printf("Resultant Matrix (A × B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
