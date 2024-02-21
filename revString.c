/*
NAME: PRIYANSHI BISHT
SECTION: A
ROLL NO.: 4
WAP in C to implement a recursive function to reverse a string.
*/


#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end) {
    if (start >= end) 
    {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

   
    reverse(str, start + 1, end - 1);
}

int main() {
    char str[40];
    printf("Enter a string: ");
    fgets(str,40,stdin)

    int l= strlen(str);

    reversemstr, 0, l - 1);

 
    printf("Reversed String: %s\n", str);

    return 0;
}
