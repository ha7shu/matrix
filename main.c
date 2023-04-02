#include <stdio.h>
#include "matrix.h"

int main()
{
    printf("This is a program to perform different operations on matrices. Most common operations are defined in \"Matrix.h\" header file. \n");
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    printf("\nOrder of the matrix is %d X %d \n", rows, cols);
    int matrix[rows][cols];
    printf("\nEnter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Matrix %d%d : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe matrix formed is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int transPose[cols][rows];
        printf("\nSum of all elements in the matrix is %d \n", sumOfElements(rows, cols, matrix));
        transpose(rows, cols, matrix, transPose);
        printf("\nTranspose of the matrix is: \n");
        for(int i = 0; i < cols; i++){
            for(int j = 0; j < rows; j++){
                printf("%d ", transPose[i][j]);
            }
            printf("\n");
        }
        printf("\nDeterminant of the matrix is %d \n", determinant(rows, matrix));
    if(rows == cols){
        int Diag[rows], trace = 0;
        diagonal(rows, matrix, Diag);
        printf("\nDiagonal of the matrix is: \n");
        for(int i = 0; i < rows; i++){
            printf("%d ", Diag[i]);
            trace += Diag[i];
        }
        printf("\nSum of diagonal elements i.e Trace of matrix is %d\n", trace);
    }
    return 0;
}