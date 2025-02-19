// QUESTION
// Create a program to print a palindromic pattern using alphabets. Each row should be perfectly centered and form a palindrome using consecutive letters.

// EXAMPLE
//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print spaces for center alignment
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }

    
        for (char ch = 'A'; ch < 'A' + i; ch++) {
            printf("%c", ch);
        }

     
        for (char ch = 'A' + i - 2; ch >= 'A'; ch--) {
            printf("%c", ch);
        }

        
        printf("\n");
    }

    return 0;
}
