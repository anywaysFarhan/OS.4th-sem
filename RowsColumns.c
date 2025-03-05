#include <stdio.h>

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Sum of rows
    printf("Sum of rows:\n");
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d sum: %d\n", i + 1, rowSum);
    }

    // Sum of columns
    printf("Sum of columns:\n");
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d sum: %d\n", j + 1, colSum);
    }

    return 0;
}
