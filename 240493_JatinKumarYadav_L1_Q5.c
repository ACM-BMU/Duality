#include <stdio.h>
int main()
{
    int i;
    // Taking the number as input//
    printf("Enter the number: ");
    scanf("%d", &i);
    // Printing all the numbers in reverse order//
    while (i > 0)
    {
        printf("\n%d", i);
        i--;
    }
    // If user enters a negative number//
    if (i < 0)
    {
        printf("\nYou entered a negative number");
    }
    return 0;
}