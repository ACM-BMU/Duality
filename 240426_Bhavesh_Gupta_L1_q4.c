// QUESTION
// Implement a program demonstrating the difference between Call By Value and Call By Reference methods using swap function examples in C.

// EXAMPLE
// Before Swap:
// x = 10, y = 20
// After Call By Value:
// x = 10, y = 20 (values unchanged)
// After Call By Reference:
// x = 20, y = 10 (values swapped)

#include <stdio.h>


void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}


void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20;

    printf("Before Swap:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);


    swapByValue(num1, num2);
    printf("\nAfter Call By Value:\n");
    printf("num1 = %d, num2 = %d (values unchanged)\n", num1, num2);

   
    swapByReference(&num1, &num2);
    printf("\nAfter Call By Reference:\n");
    printf("num1 = %d, num2 = %d (values swapped)\n", num1, num2);

    return 0;
}
