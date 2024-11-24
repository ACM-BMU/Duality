// QUESTION
// Write a program to print natural numbers in reverse order from N to 1, where N is input by the user. Include proper error handling for negative numbers.

// EXAMPLE
// Input: N = 5
// Output:
// 5
// 4
// 3
// 2
// 1

#include <stdio.h>

int main()
{
 int num;
 printf("ENTER NUMBER : ");
 scanf("%d",&num);
 
 
 printf("OUTPUT : ");
 for(int i=num;i>0;i--){


 	printf("%d \n",i);
    
    } 
 	
	return 0;
}