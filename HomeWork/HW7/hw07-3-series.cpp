/*
    จงเขียนโปรแกรมภาษาซีเพื่อรับข้อมูลจากผู้ใช้เป็นตัวเลข และให้แสดงชุดอนุกรมตามจำนวนตัวเลขที่กรอก พร้อมกับแสดงผลรวมของชุดอนุกรมนี้ 9 + 99 + 999 + 9999 + 9999 + .... เช่น ผู้ใช้กรอกเลข 5 ให้แสดงชุดอนุกรมคือ 9 + 99 + 999 + 9999 + 99999 และแสดงผลรวมคือ 111105
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            5
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999
        Sum = 111105

    Test case:
        Enter number :
            7
    Output:
        Series = 9 + 99 + 999 + 9999 + 99999 + 999999 + 9999999
        Sum = 11111103
*/
#include <stdio.h>

int expo10( int expo ) {
    int num = 10 ;
    int rnum = 10 ;
    int sum = 1 ;
    int i = 2 ;
    if( expo > 0 ) {
        while( i <= expo ) {
            sum += rnum ;
            rnum *= num ;
            i++ ;
        }//end for
    }//end for
    else return 1 ;
    return sum ;
}//end function

int main() {
    int num, sum = 0, got, i = 1 ;
    printf( "Enter number :\n    " ) ;
    scanf( "%d", &num ) ;
    printf( "---------------------------------------\n" ) ;
    printf( "Series = " ) ;
    while( i <= num ) {
        got = ( 9 * expo10( i ) ) ;
        printf( "%d", got ) ;
        if( i != num ) printf( " + " ) ;
        sum += got ;
        i++ ;
    }//end for*/
    printf( "\nSum = %d", sum ) ;
}//end main