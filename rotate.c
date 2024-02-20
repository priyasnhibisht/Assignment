/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to rotate the elements of a 1D array to the right by a specified number of positions.
 */

#include <stdio.h>

void rotate(int a[], int n, int pos) {
    int temp;
    
    for (int i = 0; i < pos; i++) {

        temp = a[n - 1];

        for (int j = n - 1; j > 0; j--) {
            a[j] = a[j - 1];
        }

        a[0] = temp;
    }
}

int main() {
    int n, pos;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of positions to rotate to the right: ");
    scanf("%d", &pos);

    rotate(a, n , pos);

    printf("Rotated Array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
