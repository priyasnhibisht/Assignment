/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to  check if a 2d array is an identity matrix and print the result.
 */

#include <stdio.h>

int main() 
{
    int n;

    printf("Enter size of square matrix : ");
    scanf("%d", &n);

    int a[n][n];
  
    printf("Enter the elements of the matrix:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    int ientity = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            if ((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0)) {
                identity = 0;
                break;
            }
        }
        if (!identity) {
            break;
        }
    }

    if (identity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0; 
}
