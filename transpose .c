#include <stdio.h>

void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[j][i] = matrix[i][j];
}

int main() {
    int rows, cols;
    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transposed[cols][rows];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    transpose(rows, cols, matrix, transposed);

    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++)
            printf("%d ", transposed[i][j]);
        printf("\n");
    }

    return 0;
}
