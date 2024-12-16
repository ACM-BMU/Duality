#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: "); 
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char ch = 'A';
        for(int j = n-i-1; j > 0; j--){
            printf(" ");
        }
        for(int j = 0; j <= i; j++){
            printf("%c",ch);
            ch++;
        }

        ch -= 2;
        for(int j = 1; j <= i; j++){
            printf("%c", ch);
            ch--;
        }
        printf("\n");
    }
}