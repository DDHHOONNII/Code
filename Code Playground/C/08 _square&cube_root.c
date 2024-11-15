#include <stdio.h>

int main()
{
    int  sqaure, cube, n;
    printf("Enter your vaule : ");
    scanf("%d", &n);
    sqaure = n * n;
    printf("Sqaure root of %d is : %d \n", n, sqaure);
    cube = n * n * n;
    printf("The cube root of %d is: %d ", n, cube);

    return 0;
}