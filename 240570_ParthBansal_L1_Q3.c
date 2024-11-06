//digit frequency counter
//Create a program that counts the frequency of a given digit in a number. The program should work for multi-digit numbers and handle edge cases.
#include<stdio.h>
int main(){
    int number , digit , sum = 0;
    printf("enter a number : ");
    scanf("%d",&number);
    int a = number;
    printf("enter a digit : ");
    scanf("%d",&digit);
    while(number!=0){
        int i = number % 10;
        if(digit == i){
            sum++;
        }
        number = number / 10;
    }
    if(sum == 0){
        printf("%d is not present in %d",digit,number);
    }
    printf("frequency of %d in %d is %d",digit,a,sum);
}
