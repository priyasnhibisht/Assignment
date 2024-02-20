/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to sort each column of a 2D array in descending order.
 */

#include <stdio.h>

int main() {
    int r, c;
    int i,j;
    
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r,&c);

    int a[r][c];

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("Element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (j = 0; j < c; j++) {
        for (i = 0; i < r - 1; i++) {
            for (int k = 0; k < r - i - 1; k++) {
                if (a[k][j] < a[k + 1][j]) {
        
                    int temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            }
        }
    }

    printf("\nSorted 2D array with each column in descending order:\n");
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
