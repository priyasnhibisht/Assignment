/* NAME : PRIYANSHI BISHT 
   SECTION  : A
   ROLL NO. : 47
WAP in C implement a recursive function to calculate the result of raising a number to the power of another.
*/

#include <stdio.h>

double power(double base, double exp)
    {
  
    if (exp == 0) {
        return 1.0;
    }

  
    return base * power(base, exp - 1);
}

int main() {
    double base;
   double exp;

   
    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the exponent: ");
    scanf("%f", &exp);

   
    double res = power(base, exp);

    printf("%f raised to the power of %f is: %f", base, exp, res);

    return 0;
}
