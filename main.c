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
            printf("Element %d%d: ", i+1, j+1);
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
        printf("\nSum of diagnonal elements i.e trace of matrix is %d \n", trace);
    }
    char choice;
    printf("\nDo you want to perform Addition and Multiplicaton of two matrices? (y/n): ");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y'){
        int rows1, cols1;
        printf("\nEnter the number of rows for 2nd matrix : ");
        scanf("%d", &rows1);
        printf("\nEnter the number of columns for 2nd matrix : ");
        scanf("%d", &cols1);
        int matrix1[rows1][cols1];
        printf("\nEnter the elements of the matrix: \n");
        for (int i = 0; i < rows1; i++){
            for (int j = 0; j < cols1; j++){
                printf("Element %d%d: ", i+1, j+1);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("\nSecond Matrix formed is : \n");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                printf("%d ", matrix1[i][j]);
            }
            printf("\n");
        }
        if(rows == rows1 && cols == cols1){
                    int result1[rows1][cols1];
        addTwoMatrices(rows1, cols1, matrix, matrix1, result1);
        printf("\nSum of 1st matrix and 2nd matrix is : \n");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                printf("%d ", result1[i][j]);
            }
            printf("\n");
        }
        } else {
            printf("\nSum of these two matrices is not possible because either number of rows of matrix 1 (%d) != number of rows of matrix 2 (%d) or number of columns of matrix 1 (%d) != numeber of columns of matrix 2 (%d) \n", rows, rows1, cols, cols1);
        }
        if(cols == rows1){
            int result2[rows1][cols1];
        multiplyTwoMatrices(rows, cols, matrix, rows1, cols1, matrix1, result2);
        printf("\nProduct of 1st matrix and 2nd matrix is : \n");
        for(int i = 0; i < rows1; i++){
            for(int j = 0; j < cols1; j++){
                printf("%d ", result2[i][j]);
            }
            printf("\n");
        }
        } else {
            printf("\nProduct of these two matrices is not possible because number of columns of matrix 1 %d != number of rows of matrix 2 %d \n", cols, rows1);
        }
    } else {
        printf("\nThank you for using this program.\n");
    }
    return 0;
}