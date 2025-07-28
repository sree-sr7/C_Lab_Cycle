// Program to find determinant of 2x2 or 3x3 matrix using menu @Sreeraj Sreekumar
// 28 July 2025

#include <stdio.h>
#include <stdlib.h>  // For exit()

void det2x2() {
    int a, b, c, d;
    printf("Enter 4 elements of 2x2 matrix (row-wise):\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int det = (a * d) - (b * c);
    printf("Determinant of 2x2 matrix = %d\n", det);
}

void det3x3() {
    int m[3][3];
    printf("Enter 9 elements of 3x3 matrix (row-wise):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }

    int a = m[0][0], b = m[0][1], c = m[0][2];
    int d = m[1][0], e = m[1][1], f = m[1][2];
    int g = m[2][0], h = m[2][1], i = m[2][2];

    int det = a * (e * i - f * h) - b * (d * i - f * g) + c * (d * h - e * g);
    printf("Determinant of 3x3 matrix = %d\n", det);
}

int main() {
    int choice;

    while (1) {
        printf("1. Find Determinant of 2x2 Matrix\n");
        printf("2. Find Determinant of 3x3 Matrix\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                det2x2();
                break;
            case 2:
                det3x3();
                break;
            case 3:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
