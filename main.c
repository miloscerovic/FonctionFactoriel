#include <stdio.h>
#include <stdlib.h>

int main()

{

    int x;

    printf("\nMettez un nombre :");
    scanf("%i",&x);

    factorial(x);
    printf("\n %i! =%i", x, factorial(x));
    return 0;
}

int factorial(int x)
{
    int resulat = 1;

    if(x==1)
    {
        return 1;
    }
    return (x*factorial((x-1)));




}
