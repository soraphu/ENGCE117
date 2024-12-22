/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์
    
    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9           
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :        
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/
#include <stdio.h>
int main() {
    int num, max = 0, second = 0, third = 0 ;
    printf( "Enter new element of Array :\n    " ) ;
    scanf( "%d", &num ) ;
    int arr[ num ] ;

    for( int i = 0 ; i < num ; i++ ) {
        printf( "Input :\n    " ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    for( int i = 0 ; i < num ; i++ ) if( max < arr[ i ] ) max = arr[ i ] ;    
    for( int i = 0 ; i < num ; i++ ) if( second < arr[ i ] && arr[ i ] < max ) second = arr[ i ] ;    
    for( int i = 0 ; i < num ; i++ ) if( third < arr[ i ] && arr[ i ] < second ) third = arr[ i ] ;    

    printf( "Array : " ) ;
    for( int i = 0 ; i < num ; i++ ) printf( "%d ", arr[ i ] ) ;    
    printf( "\nThe large 3rd element = %d", third ) ;

    return 0 ;
}//end main