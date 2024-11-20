// W.A.P.to count the digits....

#include <stdio.h>

int main()
{
    int n;
    int num = 0;
    printf("Enter your number:- ");
    scanf("%d", &n);
    while (n != 0)
    {
        n = n / 10;
        num++;
    }
    printf("The number of digits are %d", num);
    return 0;
}