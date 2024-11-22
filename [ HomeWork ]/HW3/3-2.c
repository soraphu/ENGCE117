//TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main() {
    float a, b = 3 ;
    bool Bool = 0 ;
    int i = 0 ;
    printf( "%d", Bool ) ;
    if( Bool != 0 ) printf( "ok") ;
    else while( i <= 5 ) printf( "not-okey-%d", i ++ ) ;
    for( i = 3 ; i < 10 ; i ++ ){
        if( i%2 == ( !1?1:2 ) ) {
            printf( "see see" ) ; 
            printf( "haha" ) ;
        }
    }
    return 0 ;
}