/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก
    
    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/
#include <stdio.h>
int main() {
    int num = 0 ;  
    printf( "Input N :\n    " ) ;
    scanf( "%d", &num ) ;
    int arr[ num ] ;
    bool val[ num ]{ false } ;
    
    for( int i = 0 ; i < num ; i ++ ) {
        printf( "Element[%d]\n    ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for
    for( int i = 0 ; i < num ; i++ ) { 
        for( int j = 0 ; j < num ; j++ ) {
            int temp = arr[ j ] ;
            if( arr[ j ] > arr[ j + 1 ] ) {
                arr[ j ] = arr[ j + 1 ] ;
                arr[ j + 1 ] = temp ;
            }//end if
        }//end for
    }//end for
    
    printf( "---------------------------------------\n" ) ;
    
    for( int i = 0 ; i < num ; i++ ) {
        if( val[ i ] == true ) continue ;
        int count = 0 ;
        for( int j = 0 ; j < num ; j++ ) {
            if( arr[ i ] == arr[ j ] ) {
                count++ ;
                val[ j ] = true ;
            }//end if
        }//end for
        if( count > 1 ) printf( "%d -> %d values.\n", arr[ i ], count ) ;
        else printf( "%d -> %d value.\n", arr[ i ], count ) ;
    }//end for
}//end main