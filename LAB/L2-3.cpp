#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter[], char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int *num ;
    explode( "I/Love/You", "/", out, num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter[], char str2[][10], int *count ) {
}

    /*while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }*/

