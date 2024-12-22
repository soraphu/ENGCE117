/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย
    
    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] : 
            9
        --| Array1 [1] : 
            7
        --| Array1 [2] : 
            6
        --| Array1 [3] : 
            3
        Enter element of Array2 :
            5
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            3
        --| Array2 [2] : 
            5
        --| Array2 [3] : 
            8
        --| Array2 [4] : 
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2
    
    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] : 
            7
        --| Array1 [1] : 
            8
        --| Array1 [2] : 
            9
        --| Array1 [3] : 
            6
        --| Array1 [4] : 
            1
        --| Array1 [5] : 
            2
        --| Array1 [6] : 
            8
        --| Array1 [7] : 
            3
            
        Enter element of Array2 :
            6
        --| Array2 [0] : 
            2
        --| Array2 [1] : 
            1
        --| Array2 [2] : 
            3
        --| Array2 [3] : 
            5
        --| Array2 [4] : 
            3
        --| Array2 [5] : 
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/
#include <stdio.h>
int main() {
    int Array1[ 50 ], Array2[ 50 ], Array3[ 50 ] ;
    int num1 = 0, num2 = 0 ;

    printf( "Enter element of Array1 :\n    " ) ;
    scanf( "%d", &num1 ) ;
    for( int i = 0 ; i < num1 ; i++ ) { //scan Array1
        printf( "--| Array1 [%d] :\n    ", i ) ;
        scanf( "%d", &Array1[ i ] ) ;
    }//end for
    printf( "Enter element of Array2 :\n    " ) ;
    scanf( "%d", &num2 ) ;

    for( int i = 0 ; i < num2 ; i++ ) { //scan Array2
        printf( "--| Array2 [%d] :\n    ", i ) ;
        scanf( "%d", &Array2[ i ] ) ;
    }//end for
    
    for( int i = 0 ; i < num1 ; i++ ) { //Merge Array1 to Array3
        Array3[ i ] = Array1[ i ] ;
    }//end for
    for( int i = 0 ; i < num2 ; i++ ) { //Merge Array2 to Array3
        Array3[ num1 + i ] = Array2[ i ] ;
    }//end for

    for( int i = 0 ; i < num1 + num2 - 1 ; i++ ) { //สลับภายใน(array)ให้ค่ามาก->ค่าน้อย
        for( int j = 0 ; j < num1 + num2 - 1 ; j++ ) {
            if( Array3[ j ] < Array3[ j + 1 ] ) {
                int temp = Array3[ j ] ;
                Array3[ j ] = Array3[ j + 1 ] ;
                Array3[ j + 1 ] = temp ; 
            }//end if
        }//end for
    }//end for

    printf( "Array3 = " ) ; 
    for( int i = 0 ; i < num1 + num2 ; i ++) {       
        printf( "%d ", Array3[ i ] ) ;
    }//end for*/
}//end function