/* Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50 => F*/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter your no:- ");
    scanf("%d",&num );

    if (num>=90&& num< 100){
        printf("A");

    }
else if(num>=80&& num< 90)
{
    printf("B");
}
else if (num>=70 && num< 80)
{
    printf("C");
}
else if(num>=60&& num< 70)
{
    printf("D");   
}

else if (num <= 50 )
{
    printf("Fail");
}
else
{
    printf("Enter valid No.");
}
    return 0;
}