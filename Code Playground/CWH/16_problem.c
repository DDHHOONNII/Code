/*Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income Slab         Tax
2.5 – 5.0L           5%
5.0L - 10.0L        20%
Above 10.0L         30%  */

#include <stdio.h>

int main()
{
    int salary;
    int tax=0;

    printf("Enter your salary : ");
    scanf("%d", &salary);
    printf("your salary is %d\n", salary);

    if (salary >= 250000 && salary <= 500000)
    {
        tax = salary * 5 / 100;
        printf("Your Tax amount is:- %d", tax);
    }

    else if (salary > 500000 && salary <= 1000000)
    {
        tax = salary * 20/100;
        printf("Your Tax amount is:- %d", tax);
    }

    else if (salary > 1000000)
    {
        tax = salary * 30 / 100;
        printf("Your Tax amount is:- %d", tax);
    }
    else
    {
        printf("No need to pay tax");
    }

    return 0;
}