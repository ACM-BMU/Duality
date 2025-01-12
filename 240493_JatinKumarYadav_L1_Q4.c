#include <stdio.h>
void CallbyValue(int a, int b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
void CallbyReference(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}
int main()
{
    int x = 10, y = 20;
    // Provinding the value of x and y//
    printf("\nInitially value of x=%d and y=%d", x, y);
    // Using Call by Value//
    printf("\nAfter using Call by Value: ");
    CallbyValue(x, y);
    printf("x=%d, y=%d", x, y);
    // Using Call by Reference//
    printf("\nAfter using Call by Reference: ");
    CallbyReference(&x, &y);
    printf("x=%d, y=%d", x, y);
    // value doesn't change in call by value but value gets changed in call by reference//
    return 0;
}