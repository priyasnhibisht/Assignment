/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to compute the sum of each row in a 2D array and store the results in a separate array.
 */

#include <stdio.h>

int main() {
    int r, c;
    int i,j;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("Element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int rowSum[r];
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0; 
        for (int j = 0; j < c; j++) {
            rowSum[i] = rowSum[i]+ a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (int i = 0; i < r; ++i) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
