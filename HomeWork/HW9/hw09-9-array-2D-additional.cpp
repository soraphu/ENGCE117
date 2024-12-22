/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน
    
    Test case:
        Array1 element : 
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element : 
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10
            
*/
#include <stdio.h>
int main() {
    int r1, c1, r2, c2 ;//กำหนดตัวแปร
    
    printf( "Array1 element :\n    " ) ;//ส่วน Input arr1
    scanf( "%d %d", &r1, &c1 ) ;
    int arr1[ r1 ][ c1 ] ;//กำเนิด Matrix1
    printf( "Input :\n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        printf( "    " ) ;
        for( int j = 0 ; j < c1 ; j++ ) {
            scanf( "%d", &arr1[ i ][ j ] ) ;
        }//end for
    }//end for
    
    printf( "Array2 element :\n    " ) ;//ส่วน Input arr2
    scanf( "%d %d", &r2, &c2 ) ; 
    int arr2[ r2 ][ c2 ] ;//กำเนิด Matrix2
    printf( "Input :\n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        printf( "    " ) ;
        for( int j = 0 ; j < c2 ; j++ ) {
            scanf( "%d", &arr2[ i ][ j ] ) ;
        }//end for
    }//end for

    if( r1 != r2 || c1 != c2 ) {
        printf( "\n( Error invalid element )" ) ;
        return 0 ;
    }//end if

    int arr3[ r1 ][ c2 ] ;//กำเนิด Matrix3
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            arr3[ i ][ j ] = arr1[ i ][ j ] + arr2[ i ][ j ] ;
        }//end for
    }//end for

    printf( "Array1 + Array2 = Array3\n" ) ;//แสดง(arr3)ทุกตัว
    for( int i = 0 ; i < r2 ; i++ ) { 
        printf( "    " ) ;
        for( int j = 0 ; j < c2 ; j++ ) {
           printf( "%d ", arr3[ i ][ j ] ) ;
        }//end for
        printf( "\n" ) ;
    }//end for
}//end main