#include <stdio.h>

int main()
{
    int n = 23;
    int i, a = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0) // divisible
            a = 1;
        break;
    }
    if (a == 0)
        printf("prime");
    else
        printf("composite");
    return 0;
}