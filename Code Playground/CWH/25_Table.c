// Table of 19
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n :- ");
    scanf("%d", &n);
    for (i = 1; i <= n * 10; i++)
    {
        if (i % n == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}