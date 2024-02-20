/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to insert elements in a 1D array and and find the sum of all the elements in the given array
 */
#include <stdio.h>

int main() {
    int n;
    int sum=0;
    
    printf("Enter size ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum =sum +a[i];
    }
    printf("Sum of elements: %d\n", sum);

    return 0;
}
