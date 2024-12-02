#include <stdio.h>

char* reverse( char str1[] ) ;

int main() {
    char text[ 50 ] = "I Love You So Much Very Much" ;
    char *out ;
    out = reverse( text ) ; //(out)ชี้ไปที่&ที่(reverse)ชี้อยู่ ก็คือ(str2)ที่ทำการคืนค่ามา
    printf( "### Input\n\n  %s", text ) ;
    printf( "\n\n\n### Output\n\n  " ) ;
    for( int i = 50 ; i >= 0 ; i -- ) { //วนแสดงที่ตัวอักษรตั้งแต่(*out[50 ถึง 0])
        printf( "%c", *( out + i ) ) ;
    }
    return 0 ;
}//end function

char* reverse( char str1[] ) {
    char *str2 ;
    str2 = str1 ; //(str2)ชี้ไปที่(&str1)ที่เก็บสตริงไว้
    return str2 ;
}