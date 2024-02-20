/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to calculate the sum of elements in the upper triangle of a square matrix
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square matrix ");
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element at position (%d, %d): ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum= sum + a[i][j];
        }
    }

    printf("Sum of elements in the upper triangle: %d\n", sum);

    return 0;
}