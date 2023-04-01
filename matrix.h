#ifndef MATRIX_H
#define MATRIX_H

int sumOfElements(int rows, int cols, int matrix[rows][cols]);
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);
void addTwoMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);
void multiplyTwoMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]);
int determinant(int n, int matrix[n][n]);
void diagonal(int n, int matrix[n][n], int diag[n]);

#endif 