//Print even no. 1 to 100 in C using for loop.

/*#include <stdio.h>
int main(){
int i ;
for(i=2;i<=100;i=i+2)
{
printf("%d \n",i);
}
return 0;
}
*/

//using if under for loop 

#include <stdio.h>

int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
{
printf("%d ",i);
}    
}
    return 0;
}