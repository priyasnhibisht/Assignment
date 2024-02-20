/* NAME : PRIYANSHI BISHT
 SECTION : A
 ROLL NO. : 47
 WAP in C to implement a recursive function to generate the nth Fibonacci number.
 */

#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    int res= fib(n);

    printf("The %dth Fibonacci number is: %d\n", n, res);

    return 0;
}
