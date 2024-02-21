/* NAME : PRIYANSHI BISHT
   SECTION : A
   ROLL NO. : 47
WAP in C  to transpose a 2D array.
*/

#include <stdio.h>

void transpose(int a[][], int rows, int cols) {
    int transposed[cols][rows];

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = a[i][j];
        }
    }
    printf("Transposed Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r,c;
    int i,j;
    int a[r][c];

    printf("Enter rows and columns:");
    scanf("%d %d", &r,&c);

    printf("Enter elements:");

    for(i=0;i<r;i++){
      for(j=0;j<c;j++)
        {
            scanf("%d",a[i][j]);
        }
    }


    transpose(a, r, c);

    return 0;
}
