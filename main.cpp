#include <cstdio>

int main()
{
	printf( "1 Liczba zmiennoprzecinkowa do dwuch liczb po przecinku : %4.2f\n",  85.369934);
	printf( "2 Liczba w systemie 16 : %x\n", 6543 );
	printf( "3 zera z przodu (8cyfr) : %08d \n", 5678 );
	
	
	
 /*	
    printf( "Znaki: %c, %c\n", 'h', 68 );
    printf( "Liczby (1): %d %i\n", 23, 45 );
    printf( "Liczby (2): %5d %0*d\n", 1234, 8, 5678 );
    printf( "Lancuchy znakow: %s, %s\n", "napis pierwszy", "Witaj" );
    printf( "Systemy liczbowe: %d %x %o %#x %#o \n", 250, 250, 250, 250, 250 );
    printf( "Liczby zmiennoprzecinowe: %4.2f %+.0e %E \n", 2.1254, 2.1254, 2.1254 );
    printf( "Liczba bez  zer wiadacych: %7d \n", 1387 );
    printf( "Liczba z zerami wiadocymi: %07d \n", 1387 );
    */
    putc( 'x', stdout );
    
    return 0;
}

// %x do 16
