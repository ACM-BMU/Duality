#include <stdio.h>

int main() {
    int num; 
    int digit, count = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int numm = num;
    printf("Enter the digit to count: ");
    scanf("%d", &digit);
    if (num < 0) {
        num = -num; 
    }
    while (num > 0) {
        rem = num % 10; 
        num = num/10;
        if (rem == digit) {
            count++; 
        }
        num /= 10; 
    }
    printf(" %d occur %d time in %d\n", digit, count , numm);
    return 0;
}