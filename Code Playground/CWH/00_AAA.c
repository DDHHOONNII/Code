#include <stdio.h>

int main()
{
    int n ,w,h,i;
    int c=0;
    printf("ENter no of student");
    scanf("%d",&n);
    printf("enter weight in kg  ");
    scanf("%d",&w);
    printf("enter height in cm  ");
    scanf("%d",&h);
    for(i=1;i<=n;i++){
        
        
        if(w<50 && h>170)
        c=c+1;

    }
    printf("Total no of student with w<50 & h>170 cm =%d",c);
    return 0;
}