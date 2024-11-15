#include <stdio.h>
int main()
{
    // age >= 18 young
    // age >= 30 elder
    // age >= 50 senoir citizon
    // age>

    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    if (age >= 18 && age < 30)
    {
        printf("you can drive and you are young");
    }
    else if (age >= 30 && age < 50)
    {
        printf("you can drive and you are elder ");
    }
    else if (age >= 50 && age<65) 
    // agar apka age 50 se jayda hai or 65 se kaam hai so you can drive
    {
        printf("you can drive and you are senior citizen");
    }
    else
    {

        printf("you Can't drive at the age of %d", age);
    }
    return 0;
}