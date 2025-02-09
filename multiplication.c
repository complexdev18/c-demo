#include <stdio.h>

#define SIZE 3 // 3x3 Matrix

// Function to multiply two matrices
void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize result matrix element
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j]; // Multiply and sum
            }
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], result[SIZE][SIZE];

    // Input first matrix
    printf("Enter 9 elements for the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    printf("Enter 9 elements for the second 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(A, B, result);

    // Print the result
    printf("Resultant Matrix (Product of A and B):\n");
    printMatrix(result);

    return 0;
}
