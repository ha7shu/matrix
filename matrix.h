#ifndef MATRIX_H
#define MATRIX_H

// Sum of all elements of the matrix 
int sumOfElements(int rows, int cols, int matrix[rows][cols]);

// Transpose of the matrix and store the result in another matrix
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows]);

// Add two matrices and store the result in another matrix 
void addTwoMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]);

// Multiply two matrices such that col1 = rows2 following laws of matrix multiplication
void multiplyTwoMatrices(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]);

// Determinant of the matrix 
int determinant(int n, int matrix[n][n]);

// Major diagonal of a square matrix
void diagonal(int n, int matrix[n][n], int diag[n]);

#endif 