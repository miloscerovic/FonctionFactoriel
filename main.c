#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n;
    int x;
    int fact;

    printf("\nMettez un nombre :");
    scanf("%i",&x);

    for (n=x; n>0; n--)
    {
        ( n * (x-1) );
        x=n;
    }
     printf("\n %i", n);
    return 0;
}
