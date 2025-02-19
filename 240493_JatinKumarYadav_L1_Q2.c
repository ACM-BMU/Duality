#include <stdio.h>
int main()
{
    int a, b, e = 0, r = 0, p = 0;
    // Asking the user if he wants to convert Decimal number to Binary number or Binary number to decimal number//
    printf("Enter 1 if you want to convert Decimal number to Binary number:\n");
    printf("Enter 2 if you want to convert Binary number to Decimal number:\nInput=");
    scanf("%d", &b);
    // Taking action as input by the users//
    if (b == 1)
    {
        // Taking Decimal number//
        printf("Enter Decimal number=");
        scanf("%d", &a);
        // Converting to Binary number//
        int i[a];
        i[0] = 1;
        while (a > i[r])
        {
            i[r + 1] = i[r] * 2;
            r++;
        }
        r--;
        // Providing output as binary number//
        printf("Binary number=");
        while (a >= 0)
        {
            if (a >= i[r] && r >= 0)
            {
                printf("1");
                a = a - i[r];
            }
            else if (a < i[r] && r >= 0)
            {
                printf("0");
            }
            r--;
        }
    }

    else if (b == 2)
    {
        // Taking Binary number//
        printf("Enter Binary number=");
        scanf("%d", &a);
        // Converting Binary number to decimal number//
        int d = a;
        // Checking total digits entered by the users//
        while (d > 0)
        {
            d = d / 10;
            r++;
        }
        // Taking number entered by the user into an array//
        int j[r];
        j[0] = 1;
        int i[r];
        i[0] = 1;
        while (a > 0)
        {
            j[p] = a % 10;
            a = a / 10;
            p++;
        }
        // Process to convert//
        for (int p = 1; p < r; p++)
        {
            i[p] = i[p - 1] * 2;
        }
        // Adding the number if Digit's place is having 1//
        p = 0;
        for (p = 0; p < r; p++)
        {
            if (j[p] == 1)
            {
                e += i[p];
            }
        }
        // Provinding decimal number as output//
        printf("Decimal number=%d", e);
    }
    else
    {
        // Your entered a wrong number//
        printf("You entered a wrong number");
        return 0;
    }
    return 0;
}