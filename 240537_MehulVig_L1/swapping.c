#include <stdio.h>

void swap(int *c, int *d){
    int temporary = *c;
    *c  = *d; 
    *d = temporary;
}

int main(){
    //call by value

    int a = 10;
    int b = 5;
    printf("Values before swap a = %d, b = %d", a, b);

    int temp = a;
    a  = b; 
    b = temp;
    printf("\nValues after swap a = %d, b = %d", a, b);

    //call by reference 

    int c = 10;
    int d = 20;
    printf("\nValues before swap c = %d, d = %d", c, d);
    swap(&c, &d);
    printf("\nValues after swap c = %d, d = %d", c, d);
}