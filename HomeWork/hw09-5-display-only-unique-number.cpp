/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก
    
    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2

    
    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

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
    printf( "Unique value : " ) ;
    for( int i = 0 ; i < num ; i++ ) {
        int count = 0 ;
        
        for( int j = 0 ; j < num ; j++ ) {
            if( arr[ i ] == arr[ j ] ) {
                count++ ;
            }//end if
        }//end for

        if( count == 1 ) printf( "%d ", arr[ i ] ) ;
    }//end for
}//end main