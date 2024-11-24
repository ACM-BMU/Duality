#include <stdio.h>
void swap (int a , int b)  // not running beacuase this a and b have different dabba jo input liya h unka dusra dabba h 
{
	int temp = a;
	a=b;
	b = temp;
	return;
}
void function(int * x , int * y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
	return; 
}

int main ()
{
	int a=10,b=20;
	swap(a,b);
	printf("A AND B AFTER SWAPPING  : %d , %d\n",a,b); // pass by value 
	function(&a,&b);
	printf("A AND B AFTER SWAPPING : %d , %d",a,b); // pass by refrence 
	return 0;
}