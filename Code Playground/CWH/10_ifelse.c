#include <stdio.h>

 int main()
{

    // Program to cheak number divisible by 97 .
    int a, divide;

    printf("Enter your number:- ");
    scanf("%d", &a);
    divide = a % 97;
    if (divide == 0)
    {
        printf("%d is divisible by 97", a);
    }
    else
    {
        printf("Not divisible ");
    }

    return 0;
}