/*Display the GP 100,50,25....upto 'n' terms.*/

#include <stdio.h>

int main()
{
    int i , n;
    float a =100;
    printf("Enter a number: ");
    scanf("%d",&n);
for(i=1;i<=n;i++) 
{
    printf("%.1f ", a);
    a=a/2;
}
    return 0;
}