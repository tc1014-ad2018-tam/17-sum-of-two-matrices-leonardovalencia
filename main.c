//Marco Leoanrdo Valencia Martinez
//A01412017@itesm.mx
//Date: 28/10/2018
//This program will help the user to sum matrixs


#include <stdio.h>

// here we store the values in the matrixs
void ReadMatrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Row: %d and column: %d. ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// this function shows the values of the matrix
void PrintMatrix(int n, int matrix[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// This function sums both matrix
void SumMatrices(int n, int matrix1[n][n], int matrix2[n][n], int matrix3[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    // Variable declaration
    int n;

    do {
        printf("how many columns would you like in your matrix? (from 2 to 10)");
        scanf("%d", &n);
    } while(n<2 || n>10);

    // Arrays declaration
    int mtr1[n][n];
    int mtr2[n][n];
    int mtr3[n][n];

    printf("Matrix 1=\n");
    ReadMatrix(n, mtr1);

    printf("Matrix 2=\n");
    ReadMatrix(n, mtr2);

    printf("Matrix 1=\n");
    PrintMatrix(n, mtr1);

    printf("Matrix 2=\n");
    PrintMatrix(n, mtr2);

    printf("Sum of the matrixs=\n");
    SumMatrices(n, mtr1, mtr2, mtr3);
    PrintMatrix(n, mtr3);

    return 0;
}