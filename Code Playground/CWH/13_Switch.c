#include <stdio.h>

int main()
{
    int a;

    printf("Enter your value:- ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
    {
        printf("You entered one \n");
    }
    break;
    case 2:
    {
        printf("You entered two \n");
    }
    break;
    case 3:
    {
        printf("You entered Three\n ");
    }
    break;

default:
{
    printf("Invaid input ");
}
    }

    return 0;
}