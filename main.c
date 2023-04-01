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
    printf("Order of the matrix is %d X %d \n", rows, cols);
    int matrix[rows][cols];
    printf("Enter the elements of the matrix: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The matrix formed is: \n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Available operations that can be performed on matrix is : \n1. Sum of all elements in the matrix. \n2. Transpose of the matrix. \n3. Determinant of the matrix. \n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    int transPose[cols][rows];
    switch(choice){
        case 1:
        printf("Sum of all elements in the matrix is %d \n", sumOfElements(rows, cols, matrix));
        break;
        case 2:
        transpose(rows, cols, matrix, transPose);
        printf("Transpose of the matrix is: \n");
        for(int i = 0; i < cols; i++){
            for(int j = 0; j < rows; j++){
                printf("%d ", transPose[i][j]);
            }
            printf("\n");
        }
        break;
        case 3:
        printf("Determinant of the matrix is %d \n", determinant(rows, matrix));
        break;
    }
    if(rows == cols){
        int Diag[rows];
        diagonal(rows, matrix, Diag);
        printf("Diagonal of the matrix is: \n");
        for(int i = 0; i < rows; i++){
            printf("%d ", Diag[i]);
        } 
        printf("\n");
    }
    return 0;
}