// QUESTION
// Write a program to convert a decimal number to binary and vice versa. The program should handle both positive and negative numbers.


#include <stdio.h>

int main(){
	int choice;
	printf("press 1 for decimal to binary OR press 2 for decimal to binary \n");
	scanf("%d",&choice);
	
	if ( choice == 1){
	
    int n ;
   
    
    printf("enter number : ");
    scanf("%d",&n);
    
      if(n >= 0){ 
	 }
      else n = n * (-1);
    int B_n[32];
    int i = 0;
    while (n > 0) {
        
        B_n[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--){
        printf("%d", B_n[j]);}}
        

  else if(choice == 2){
  	
  	int binary;
    int n = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    
     if(binary >= 0){ 
	 }
      else binary = binary * (-1);

    while (binary > 0) {
        remainder = binary % 10; 
        n += remainder * base; 
        base *= 2; 
        binary /= 10; 
    }

    printf(" number : %d\n", n);
  	
  	
  }
  
  else printf("INVALID INPUT");

    return 0;
}