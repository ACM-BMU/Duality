//QUESTION 3
//Create a program that counts the frequency of a given digit in a number. The program should work for multi-digit numbers and handle edge cases.
//
//EXAMPLE
//Input: 
//Number: 11345522
//Digit: 2
//Output:
//Frequency: 2
//Explanation: The digit 2 appears twice in 1134552

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
