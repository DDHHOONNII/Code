/*Write a program to find greatest of
four numbers entered by the user.*/

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter A:- ");
    scanf("%d", &a);
    printf("Enter b:- ");
    scanf("%d", &b);
    printf("Enter c:- ");
    scanf("%d", &c);
    printf("Enter d:- ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("%d is greatest no.", a);
    }

    else if (b > a && b > c && b > d)
    {
        printf("%d is greatest no.", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d is greatest no.", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("%d is greatest no.", d);
    }
    else
    {
        printf("All are equal");
    }
    return 0;
}