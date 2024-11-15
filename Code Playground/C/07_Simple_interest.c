#include <stdio.h>

int main()
{
    float p, r, t, SI;
    printf("Enter principal : ");
    scanf("%f", &p);
    printf("Enter rate of interest : ");
    scanf("%f", &r);
    printf("Enter time : ");
    scanf("%f", &t);
    SI = p * r * t / 100.0; // formula of Si Prt/100
    printf("Your interest will be : %f ", SI );

    return 0;
}