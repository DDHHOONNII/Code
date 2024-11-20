// W.A.P to print all even number 1 to 100 by using Continue statement.

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)
            continue; // continue means skip.

        printf("%d ", i);
    }
    return 0;
}