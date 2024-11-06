//BINARY NUMBER CONVERSION
//Write a program to convert a decimal number to binary and vice versa. The program should handle both positive and negative numbers.
#include<stdio.h>
#include<math.h>
int BinaryToDecimal(int a){
    int sum = 0;
    int i = 0;
    while(a!=0){
        int digit = a % 10;
        sum = sum + digit * pow(2,i);
        a = a / 10;
        i++;
    }
    return sum;
}

int DecimalToBinary(int a){
    int ans = 0;
    int i = 1;
    while(a!=0){
        int bit = a & 1;
        ans = (bit *i )+ ans;
        a = a >> 1;
        i = i * 10;
    }
    return ans;
}
int main(){
    int decimal , binary , selection;
    printf("what do want to convert \n 1. binary to decimal \n 2. decimal to binary \n 1 or 2 -> ");
    scanf("%d",&selection);
    for (int i = 1 ; i < 3; i++){
        if (selection != 1 && selection != 2){
        printf("enter valid selection : \n");
        printf("you have %d more attempts. \n",3-i);
        printf("1 or 2 -> ");
        scanf("%d",&selection);
        }
        else{
            continue;
        }
    }
    if(selection == 1){
        printf("enter binary value :");
        scanf("%d",&binary);
        printf("%d in decimal form is %d", binary , BinaryToDecimal(binary));
    }
    if(selection == 2){
        printf("enter decimal value :");
        scanf("%d",&decimal);
        printf("%d in binary form is %d", decimal , DecimalToBinary(decimal));
    }
    
}