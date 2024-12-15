#include <stdio.h>

int main(){
    //Decimal to binary
    int n;
    printf("Enter the decimal number here: ");
    scanf("%d",&n);
    int binary = 0;
    int pv = 1;

    while ( n > 0){
        int remainder = n % 2;
        binary += remainder * pv;
        n /= 2;
        pv *= 10;
    }
    printf("The binary form is: %d", binary);
    //Binary to Decimal
    int m;
    printf("\nEnter the binary number here: ");
    scanf("%d",&m);
    int decimal = 0;
    int base = 1;

    while ( m > 0){
        int remainder = m % 10;
        decimal += remainder * base;
        m /= 10;
        base *= 2;
    }
    printf("The decimal form is: %d", decimal);

}