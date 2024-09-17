/*Write a program to determine whether a character entered by the user is
lowercase or not.*/
#include <stdio.h>

int main()
{
    char character;

    printf("Enter Charecter:- ");
    scanf("%c", &character);
    printf("You entered:- %C\n",character);
    printf("The ASCII value of is %d \n", character);
    if (character >= 97 && character < 122)
    {
        printf("The inserted value is LOWERCASE ");
    }
    else
    {
        printf("Not lowercase");
    }
    return 0;
}