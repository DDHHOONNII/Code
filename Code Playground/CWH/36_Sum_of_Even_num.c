// W.A.P. to sum of all even digits..

#include <stdio.h>
int main()
{
    int n;
    int lastDigit;
    int sum = 0;
    printf("Enter your number :- ");
    scanf("%d", &n);
    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 == 0)
        {
            sum = sum + lastDigit;
        }
        n = n / 10;
    }
    printf("Sum of Even number are %d.", sum);
    return 0;
}