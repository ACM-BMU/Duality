#include <stdio.h>
int digitFrequency(long long number, int digit){
    int count = 0;
    if (digit < 0 || digit > 9) {
        printf("Digit is invalid enter a valid digit between 0 to 9\n");
        return 1;
    }
     if (number < 0) {
        number = -number;
    }
    while(number > 0){
        int remainder = number % 10;
        if(remainder == digit){
            count++;
        }
        number /= 10;
    }
    return count;
}
int main(){
    long long number;
    int  digit;
    printf("Enter the number here: ");
    scanf("%lld", &number);
    printf("Enter the digit here of which frequency needs to be calculated : ");
    scanf("%d", &digit);
    int frequency = digitFrequency(number, digit);
    printf("The digit occurs %d times in the given number.", frequency);
}