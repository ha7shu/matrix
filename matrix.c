#include "matrix.h"

int sumOfElements(int rows, int cols, int matrix[rows][cols]){
    int i, j, total = 0;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            total += matrix[i][j];
        }
    }
    return total;
}

void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            result[j][i] = matrix[i][j];
        }
    }
}

void addTwoMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]){
    int i, j;
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void multiplyTwoMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]){
    int i, j, k;
    for(i = 0; i < rows1; i++){
        for(j = 0; j < cols2; j++){
            result[i][j] = 0;
            for(k = 0; k < cols1; k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int determinant(int n, int matrix[n][n]) {
    int det = 0;
    int submatrix[n-1][n-1];
    int sign = 1;

    if (n == 1) { // base case for 1 X 1 order of matrix
        return matrix[0][0];
    } else if (n == 2) { // base case for 2 X 2 order of matrix
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            int subi = 0; // row index for submatrix
            for (int j = 1; j < n; j++) {
                int subj = 0; // column index for submatrix
                for (int k = 0; k < n; k++) {
                    if (k == i) continue;
                    submatrix[subi][subj] = matrix[j][k];
                    subj++;
                }
                subi++;
            }
            det += sign * matrix[0][i] * determinant(n-1, submatrix);
            sign = -sign;
        }
    }
    return det;
}

void diagonal(int n,int matrix[n][n], int diag[n]){
    int i, j;
    for(i = 0; i < n; i++){
        diag[i] = matrix[i][i];
    }
}