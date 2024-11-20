// W.A.P. to find factorial of any number....

#include <stdio.h>

int main()
{
    int n = 1, factorial;
    printf("Enter a number : ");
    scanf("%d", &factorial);
    
    for (int i = 1; i <= factorial; i++)
    {
        n = n * i;
    }

    printf("Factorial of %d is : %d", factorial, n);

    return 0;
}