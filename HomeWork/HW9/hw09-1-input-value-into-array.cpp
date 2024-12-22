/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/
#include <stdio.h>
int count = 0 , num  = 0 ;
int index[99] ;

int main() {
    while( num >= 0 ) {
        printf( "Input [%d] :\n    ", count ) ;
        scanf( "%d", &num ) ;
        index[ count ] = num ;
        count ++ ;
    }
    printf( "Index = " ) ;
    for( int i = 0 ; i < count - 1 ; i ++ ) { 
        printf( "%d ", i ) ; 
    }
    printf( "\nArray = " ) ;
    for( int i = 0 ; i < count - 1 ; i ++ ) { 
        printf( "%d ", index[ i ] ) ; 
    }
    return 0 ;
}