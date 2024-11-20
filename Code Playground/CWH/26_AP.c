// 4  7 10 13 16..........n
#include <stdio.h>
int main()
{
    int i, a = 4, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a + 3;
    }

    return 0;
}