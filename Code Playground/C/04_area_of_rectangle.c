#include <stdio.h>

int main()
{
    float length, bredth, area ;
    printf("Enter length of rectangle : ");
    scanf("%f", &length);
    printf("Enter bredth of rectangle : ");
    scanf("%f", &bredth);
    area= length *bredth ;
    printf("your answer is : %f cm ",area);

    return 0;
}