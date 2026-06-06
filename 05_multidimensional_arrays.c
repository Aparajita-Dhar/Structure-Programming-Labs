#include <stdio.h>

/* Topic: Array Implementations and Multidimensional Arrays
   Demonstrates structured allocation and layout of linear and matrix data.
*/

int main() {
    printf("--- 1. 1D Array Layout ---\n");
    int linear_scores[3] = {85, 92, 78};
    for(int i = 0; i < 3; i++) {
        printf("Index [%d] Element: %d\n", i, linear_scores[i]);
    }

    printf("\n--- 2. 2D Array Matrix Parsing ---\n");
    // Declaring a 2x3 matrix (2 rows, 3 columns)
    int data_matrix[2][3] = {
        {10, 20, 30}, // Row 0
        {40, 50, 60}  // Row 1
    };

    // Parsing the 2D grid structure using nested loops
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            printf("Matrix[%d][%d] = %d  ", row, col, data_matrix[row][col]);
        }
        printf("\n"); // New line after each row finishes
    }

    return 0;
}
