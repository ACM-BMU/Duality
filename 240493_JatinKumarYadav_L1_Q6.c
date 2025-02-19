#include <stdio.h>
// This will print spaces in the palindromic pattern//
void spaces(int s)
{
    for (int i = 0; i < s; i++)
    {
        printf(" ");
    }
}
int main()
{
    int i;
    // Taking the number or rows as input//
    printf("\nEnter the number of rows: ");
    scanf("%d", &i);
    // Initializing the loop//
    for (int j = 0; j < i; j++)
    {
        // Calling the space function to print the spaces//
        int space = i - j - 1;
        spaces(space);
        char center = 'A';
        // Printing the alphabets in incresing order till middle//
        for (int k = 0; k <= j; k++)
        {
            printf("%c", center);
            center++;
        }
        // Printing the alphabets in decreasing order after the middle//
        center = center - 2;
        for (int k = 0; k < j; k++)
        {
            printf("%c", center);
            center--;
        }
        // Changing the line//
        printf("\n");
    }
    return 0;
}