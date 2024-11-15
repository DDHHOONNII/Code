// WAP to sum and reverse the given number... 
#include <stdio.h>

int main()
{
    int n = 12345;
    int sum = 0, lastDigit;
    int r = 0, lastnum;

    while (n > 0)
    {
        lastDigit = n % 10;
        sum = sum + lastDigit;
        n = n / 10;
    }
    printf("Sum: %d\n", sum);
    // Reverse....
    while (sum > 0)
    {
        lastnum = sum % 10;
        r = r + lastnum;
        r = r * 10;
        sum = sum / 10;
    }
    r = r / 10;
    printf("reverse: %d", r);
    return 0;
}