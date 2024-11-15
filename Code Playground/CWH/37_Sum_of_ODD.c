#include <stdio.h>
int main()
{

    int n, lastDigit = 0;
    int sum = 0;
    printf("Enter your number :- ");
    scanf("%d", &n);

    while (n != 0)
    {
        lastDigit = n % 10;
        if (lastDigit % 2 != 0)
        {
            sum = sum + lastDigit;
        }
        n = n / 10;
    }
    printf("The sum of ODD number is %d", sum);

    return 0;
}
