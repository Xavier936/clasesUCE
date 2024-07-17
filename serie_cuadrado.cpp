#include <conio.h>
#include <math.h>
#include <stdio.h>

int main()
{
    int numero;

    printf( "\n   " );

    for ( numero = 1 ; numero <= 20 ; numero++ )
    {
        printf( "%.f\n ", pow( numero, 2 ) );
    }

    getch(); /* Pausa */

    return 0;
}
