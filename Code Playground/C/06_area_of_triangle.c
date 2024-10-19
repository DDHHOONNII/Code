#include <stdio.h>
int main()
{
    float area, b, h;
    printf("Enter breadth of triangle : ");
    scanf("%f", &b);
    printf("Enter height of Trianagle : ");
    scanf("%f", &h);
    area = 1.0 / 2.0 * b * h; // formula area of Triangle =0.5 * B * H;
    printf("Area of Triangle is : %f cm", area);
    return 0;
}