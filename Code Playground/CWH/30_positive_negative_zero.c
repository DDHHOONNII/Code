/*Write a C program to check whether a number is negative, positive or zero.*/
#include<stdio.h>
int main(){
    int num ;
    printf("enter your number:- ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Value is 0.");
    }
    else if (num>0)
    {
        printf("Value is positive.");
    }
else {
    printf("Value is negative.");

}
return 0 ;
}