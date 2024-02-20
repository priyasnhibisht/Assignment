/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to  separate even and odd elements into two different arrays from a given 1D array. 
 */

#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array ");
    scanf("%d", &n);

    int ogArr[n];
    int eArr[n], oArr[n];
    int eCount = 0, oCount = 0;

    for (int i = 0; i < n; i++) {
        printf("Element at %d",i+1);
        scanf("%d", &ogArr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (ogArr[i] % 2 == 0) {
            eArr[eCount] = ogArr[i];
            eCount++;
        } else {
            oArr[oCount] = ogArr[i];
            oCount++;
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < eCount; i++) {
        printf("%d ", eArr[i]);
    }

    printf("Odd elements: ");
    for (int i = 0; i < oCount; i++) {
        printf("%d ", oArr[i]);
    }

    return 0;
}
