/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include <stdio.h>

int main()
{
    int num ;
    printf("Enter your number:- ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("%d is divisible by 5 & 11.",num);
    }
    else if (num%5==0 && num%11!=0)
    {
        printf("Not divisible by 11 but divisible by 5");
    }
    else if(num%5!=0 && num%11==0)
    {
        printf("Divisible by 11 but not 5");
    }
    else 
    {
        printf("Not divisible by both");
    }
    return 0;
}