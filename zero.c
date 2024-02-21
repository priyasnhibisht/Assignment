/*
NAME: PRIYANSHI BISHT
SECTION: A
ROLL NO.: 47
Write a function to set all elements in a row or column to zero if any element in that row or column is zero.
*/

#include <stdio.h>

void setZero()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", a[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] == 0) {
                for (int k = 0; k < rows; k++) {
                    a[k][j] = 0; 
                }
                for (int k = 0; k < cols; k++) {
                    a[i][k] = 0; 
                }
                break;
            }
        }
    }

    printf("\nMatrix after setting zeroes:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    setZero();
    return 0;
}

