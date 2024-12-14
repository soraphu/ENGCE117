#include <stdio.h>
#include <string.h>

void commas( int len, char str[] ) {
    for( int i = len ; i > ( len - 6 ) ; i -- ) {
            str[ i ] = str[ i - 1 ] ;
    }
    str[ len - 6 ] = ',' ;
    str[ len + 1 ] = '\0' ;
    printf( "%s", str ) ;
}

int main() {
    float num ;
    char str[ 50 ] ;
    int len ;
    scanf( "%f", &num ) ;
    sprintf( str, "%.2f", num ) ;
    len = strlen( str ) ;
    if( len == 7 ) commas( len, str ) ; //x1K
    if( len == 8 ) commas( len, str ) ; //x10K
    if( len == 9 ) commas( len, str ) ; //x100K
    if( len == 10 ) { //x1M 
        for( int i = len + 1 ; i > ( len - 6 ) ; i -- ) {
                str[ i ] = str[ i - 2 ] ;
        }
        str[ len - 6 ] = ',' ;
        for( int i = len - 5 ; i > ( len - 9 ) ; i -- ) {
                str[ i ] = str[ i - 1 ] ;
        }
        str[ len - 9 ] = ',' ;
        str[ len + 2 ] = '\0' ;
        printf( "%s", str ) ; 
    }
}
