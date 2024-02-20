/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to find HCF of two integers using recursion.
 */

#include <stdio.h>

int hcf(int a, int b) {
    if (b == 0) {
        return a; 
    } else {
        return hcf(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int res = hcf(num1, num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, res);

    return 0;
}
