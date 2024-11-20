// 1 + 2 + 3 + 4 ...... n

#include <stdio.h>

int main()
{
    int sum = 0, n;
    printf("Enter nth term : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + i;
    }
    printf("Sum : %d", sum);
    return 0;
}