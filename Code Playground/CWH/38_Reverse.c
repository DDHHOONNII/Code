// W.A.P. to reverse the given number...

#include <stdio.h>

int main()
{
    int n = 9999;
    int r = 0;
    int lastDigit;

    while (n > 0)
    {
        lastDigit = n % 10;
        r = r + lastDigit;
        r = r * 10;
        n = n / 10;
    }
    r = r / 10;
    printf("%d", r);
    return 0;
}