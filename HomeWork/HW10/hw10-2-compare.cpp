/*
    จงเขียนโปรแกรมเพื่อรับค่าอักขระจากผู้ใช้ทีละ 1 ตัวอักษรไปเรื่อยๆ เพื่อรับค่าใส่ไว้ภายในอาเรย์ แต่หากเจอตัวอักษร 'Y' หรือ 'y' ให้หยุดการทำงาน และแสดงค่าภายใน String ทันที

    Test case:
        Enter 1 character : 
            U
        Enter 1 character : 
            v
        Enter 1 character : 
            G
        Enter 1 character : 
            k
        Enter 1 character : 
            R
        Enter 1 character : 
            m
        Enter 1 character : 
            q
        Enter 1 character :
            Y
    Output:
        String = U v G k R m q

    Test case:
        Enter 1 character : 
            H
        Enter 1 character : 
            e
        Enter 1 character : 
            l
        Enter 1 character : 
            l
        Enter 1 character : 
            o
        Enter 1 character : 
            y
    Output:
        String = H e l l o

*/
#include <stdio.h>

int main() {
    char input[ 50 ] ;
    int i = 0 ;
    while( input[ i - 1  ] != 'y' && input[ i - 1 ] != 'Y' ) {
        printf( "Enter 1 character :\n    " ) ;
        scanf( "%s", &input[ i ] ) ;
        i ++ ;
    }//end while
    printf( "String = " ) ;
    for( int j = 0 ; j < i - 1 ; j ++ ) {
        printf( "%c ", input[ j ] ) ;
    }//end for
}//end function
