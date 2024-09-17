#include <stdio.h>

int main()
{
    int age;

    // Program to cheak are eliglible for driving or not .
    printf("enter your age ");
    scanf("%d", &age);

    if (age>=18)
{
    printf("you are eliglible for Driving ");

}
else{
    printf("NOT ELIGLIBLE FOR DRIVING ");
}
    return 0;
}