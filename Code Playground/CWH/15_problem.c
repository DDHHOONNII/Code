/*Write a program to determine whether a student has passed or failed.
To pass, a student requires a total of 40% and at least 33% in each subject.
Assume there are three subjects and take the marks as input from the user.*/

#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter your marks1 :\n");
    scanf("%d", &marks1);
    printf("Enter your marks2 :\n");
    scanf("%d", &marks2);
    printf("Enter your marks3 :\n");
    scanf("%d", &marks3);

    printf("Your marks is %d,%d,%d .\n",marks1,marks2,marks3);


    if(marks1<33|| marks2<33||marks3<33)
    printf("You are fail due less marks in subjects.");

else if((marks1+marks2+marks3)/3 <40) // remember to put bracket for precidence.
printf("Your are failed due to less percentage");
else 
printf ("your are passed !");
    return 0;
}