/*An electric power distribution company charges
 its domestic consummers as follows :-

       UNITS               RATE OF CHARGES
      0 to 200              0.5 per unit.
     201 to 400          rs100 + 0.65 per unit.
    401  to 600          rs230 + 0.80 per unit.
    601 to above         rs390 + 1.0  per unit.
    WAP in C to read the costumer no.& power consume & then 
        print the amount to  paid by the consumer.
*/
#include <stdio.h>

int main()
{
    float unit, amount;
    printf("Enter your unit:- ");
    scanf("%f", &unit);
    if (unit >= 0 && unit <= 200)
    {
        amount = unit * 0.5;
        printf("Your elctricity charge is %.1f ruppes", amount);
    }
         else if (unit >= 201 && unit <= 400)
    {
        amount = unit * 0.65 + 100;
        printf("Your elctricity charge is %.1f ruppes", amount);
    }

        else if (unit >= 401 && unit <= 600)
    {
        amount = unit * 0.80 + 230;
        printf("Your elctricity charge is %.1f ruppes", amount);
    }

    else if (unit >= 601 )
    {
        amount = unit * 1 + 390;
        printf("Your elctricity charge is %.1f ruppes", amount);
    }

    return 0;
}