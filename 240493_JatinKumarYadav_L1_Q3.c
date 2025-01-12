#include <stdio.h>
// This code will tell the occurance of a digit in a number//
int main()
{
    int i = 0, j, num, dub, occurance = 0;
    // Taking the number as input//
    printf("\nEnter the number: ");
    scanf("%d", &num);
    dub = num;
    // Finding the total digits in the number to initialize the array//
    while ((num / 10) != 0)
    {
        num = num / 10;
        i++;
    }
    i++;
    int a[i];
    // Providing each digit to the array//
    i = 0;
    while ((dub / 10) != 0)
    {
        a[i] = dub % 10;
        dub = dub / 10;
        i++;
    }
    i++;
    // Taking the digit you want to check the occurance for//
    printf("\nEnter the digit you want to check the occurance for: ");
    scanf("%d", &j);
    // Checking the occurance of the number//
    for (int f = 0; f < i; f++)
    {
        if (a[f] == j)
        {
            occurance++;
        }
    }
    // Give the occurance of number as output//
    printf("\nOccurance of %d = %d", j, occurance);
    return 0;
}