// Program: Transpose of a Matrix
// Description: This program computes the transpose of a given matrix.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int A[r][c], T[c][r];

    // Input matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Transpose
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Output transpose
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
