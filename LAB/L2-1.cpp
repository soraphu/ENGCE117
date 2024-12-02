#include <stdio.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "Barber !" ;//input
    char out[ 50 ] ;
    printf( "### Input\n\n  %s", text ) ;
    printf( "\n\n\n### Output\n\n  " ) ;
    reverse( text, out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int j = 0 ; 
    for( int i = 50 ; i >= 0 ; i -- ) { //เก็บ str1[ 50 ถึง 0 ] ใน str2[ 0 ถึง n ] ลนลูปจนครบทุกตัวอักษร
        str2[ j ] = str1[ i ] ;
        printf( "%c", str2[ j ] ) ;
        j ++ ;
    }
}