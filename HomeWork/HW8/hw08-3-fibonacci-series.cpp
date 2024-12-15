/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/
#include <stdio.h>

int main() {
    int fibo[ 99 ] ;
    int num, sum = 2 ;
    fibo[ 1 ] = 1 ;
    fibo[ 2 ] = 1 ;

    printf( "input : " ) ;
    scanf( "%d", &num ) ;

    for( int i = 3 ; i <= num ; i ++ ) {
        fibo[ i ] = fibo[ i - 1 ] + fibo[ i - 2 ] ;//นำเลขสองอันดับก่อนหน้ามาบวกแล้วเก็บใน fibo[i] = คำตอบ 
        sum += fibo[ i ] ;//นำทุกค่ามาบวกกัน
    }//end for
    printf( "Series = " ) ;
    for( int i = 1 ; i <= num ; i ++ ) {
        printf( "%d", fibo[ i ] ) ;
        if( i < num ) printf( " + " ) ;
    }//end for

    if( num == 1 ) sum -- ;//กรณีรับค่ามา = 1 จะลบ sum เพื่อให้ sum = 1 ; 
    printf( "\nSum = %d", sum ) ;
}//end function