/* NAME : PRIYANSHI BISHT 
   SECTION : A
   ROLL NO. : 47
WAP in C to create a recursive function to calculate the sum of digits of a given number.
*/

#include <stdio.h>

int sumOfDigits(int num) {
   
    if (num == 0) {
        return 0;
    }

    return (num%10)+sumOfDigits(num/ 10);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\n", sum);

    return 0;
}
