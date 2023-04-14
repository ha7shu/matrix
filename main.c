#include <stdio.h>
#include "matrix.h"

int main()
{
    printf("\nThis is a program to perform different operations on matrices.\nFunction for various operations are defined in \"Matrix.h\" header file.\n\nStart by entering the number of rows and columns of the matrix in following prompts.\n\n");
    int rows1, cols1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns: ");
    scanf("%d", &cols1);
    printf("\nOrder of the Matrix == %d X %d \n", rows1, cols1);
    int matrix1[rows1][cols1];
    printf("\nEnter the elements of the Matrix : \n");
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < cols1; j++){
            printf("Element %d%d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nThe Matrix formed is: \n");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    int transPose[cols1][rows1];
        printf("\nSum of all elements in the Matrix == %d \n", sumOfElements(rows1, cols1, matrix1));
        transpose(rows1, cols1, matrix1, transPose);
        printf("\nTranspose of the Matrix is: \n");
        for(int i = 0; i < cols1; i++){
            for(int j = 0; j < rows1; j++){
                printf("%d ", transPose[i][j]);
            }
            printf("\n");
        }
    if(rows1 == cols1){    
        printf("\nDeterminant of the Matrix == %d \n", determinant(rows1, matrix1));
    } else {
        printf("\nThis Matrix %d X %d is not a square matrix and its determinant is not possible.\n", rows1, cols1);
    }    
    if(rows1 == cols1){
        int Diag[rows1], trace = 0;
        diagonal(rows1, matrix1, Diag);
        printf("\nDiagonal of the Matrix is: ");
        for(int i = 0; i < rows1; i++){
            printf("%d ", Diag[i]);
            trace += Diag[i];
        } 
        printf("\n\nSum of diagnonal elements i.e trace of Matrix is == %d \n", trace);
    }
    char choice;
    printf("\nDo you want to perform Addition and Multiplicaton of two matrices? (y/n): ");
    scanf(" %c", &choice);
    if(choice == 'y' || choice == 'Y'){
        int rows2, cols2;
        printf("\nEnter the number of rows for 2nd Matrix : ");
        scanf("%d", &rows2);
        printf("Enter the number of columns for 2nd Matrix : ");
        scanf("%d", &cols2);
        int matrix2[rows2][cols2];
        printf("\n\nEnter the elements of the Matrix: \n");
        for (int i = 0; i < rows2; i++){
            for (int j = 0; j < cols2; j++){
                printf("Element %d%d: ", i+1, j+1);
                scanf("%d", &matrix2[i][j]);
            }
        }
        printf("\nSecond Matrix formed is : \n");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                printf("%d ", matrix2[i][j]);
            }
            printf("\n");
        }
        if(rows1 == rows2 && cols1 == cols2){
        int result[rows2][cols2];
        addTwoMatrices(rows2, cols2, matrix1, matrix2, result);
        printf("\nSum of Matrix 1 and Matrix 2 is : \n");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
        } else {
            printf("\nSum of these two matrices is not possible because either \nnumber of rows of Matrix 1 (%d) != number of rows of Matrix 2 (%d) \nor \nnumber of columns of Matrix 1 (%d) != numeber of columns of Matrix 2 (%d) \n", rows1, rows2, cols1, cols2);
        }
        if(cols1 == rows2){
        int multiplyResult[rows2][cols2];
        multiplyTwoMatrices(rows1, cols1, matrix1, rows2, cols2, matrix2, multiplyResult);
        printf("\nProduct of Matrix 1 and Matrix 2 is : \n");
        for(int i = 0; i < rows2; i++){
            for(int j = 0; j < cols2; j++){
                printf("%d ", multiplyResult[i][j]);
            }
            printf("\n");
        }
        } else {
            printf("\nProduct of these two matrices is not possible because \nnumber of columns of Matrix 1 %d != number of rows of Matrix 2 %d \n", cols1, rows2);
        }
    }
    printf("\nThank you for using this program.\n\n");
    return 0;
}