#include <stdio.h>
#include <stdlib.h>

int main()

{

    int x;

    printf("\nMettez un nombre :");
    scanf("%i",&x);

    factorial(x);
    return 0;
}

void factorial(int x)
{
    int resulat = 1;
    for (int n=x; n>0; n--)
    {
        resulat= resulat*n;
    }
     printf("\n %i", resulat);
}
