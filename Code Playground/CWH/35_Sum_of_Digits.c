// W.A.P. to print sum of digits of a given number ...

#include <stdio.h>

int main()
{
    int sum = 0, n;
    int last_digit;
    printf("Enter your number:- ");
    scanf("%d", &n);
    while (n != 0) // Jab tk n ka value 0 nhi hai..
    {
        last_digit = n % 10;
        sum = sum + last_digit;
        n = n / 10;
    }
    printf("Sum of digits are %d ", sum);
    return 0;
}