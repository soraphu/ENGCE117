/*
    รับค่า Array จากผู้ใช้มา 2 ค่า และเติมค่าในอาเรย์ให้เต็มทั้ง 2 ค่า นั้นนั้นทำ Array1 มาคูณกับ Array2 แบบ Matrix (คุณสามารถหาข้อมูลการคูณ Matrix เพิ่มเติมได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=Gocc4CriZdA)
    
    Test case:
        Array1 Value :
            2 5
        Array1 element :
            2 5 3 8 3
            2 5 3 1 1
        Array2 Value :
            5 2
        Array2 element :
            2 3
            4 4
            1 2
            1 1
            2 3
    Output:
        Array1
            2 5 3 8 3
            2 5 3 1 1
        Array2
            2 3
            4 4
            1 2
            1 1
            2 3
        Array1 x Array2
            41 49
            30 36

*/
#include <stdio.h>

int main() {
    int row1, col1, row2, col2 ;
    
    printf( "Array1 Value :\n    " ) ; //กำหนดขนาดเมทริก 1 และค่าภายใน
    scanf( "%d %d", &row1, &col1 ) ;
    int Matrix1[ row1 ][ col1 ] ;
    printf( "Array1 element :\n" ) ;
    for( int i = 0 ; i < row1 ; i++ ) {
        printf( "    " ) ; 
        for( int j = 0 ; j < col1 ; j++ ) { 
            scanf( "%d", &Matrix1[ i ][ j ] ) ;
        }//end for
    }//end for
    
    printf( "Array2 Value :\n    " ) ; //กำหนดขนาดเมทริก 2 และค่าภายใน
    scanf( "%d %d", &row2, &col2 ) ;
    if( row1 == col2 ) {
        int Matrix2[ row2 ][ col2 ] ;
        printf( "Array2 element :\n" ) ;
        for( int i = 0 ; i < row2 ; i++ ) { 
            printf( "    " ) ; 
            for( int j = 0 ; j < col2 ; j++ ) { 
                scanf( "%d", &Matrix2[ i ][ j ] ) ;
            }//end for
        }//end for

        int Matrix3[ row1 ][ col2 ] ; //กำหนดขนาดเมทริก 3 และค่าภายใน
        for( int i = 0 ; i < row1 ; i++ ) { //ทำให้ทุกค่าทุกดัชนีในเมทริก 3 เท่ากับ 0
            for( int j = 0 ; j < col2 ; j++ ) {
            Matrix3[ i ][ j ] = 0 ; 
            }//end for
        }//end for

        for( int i = 0 ; i < row1 ; i++ ) { //คูณเมทริก 1 และ 2 เท่ากับ เมทริก 3
            for( int j = 0 ; j < col2 ; j++) {
                for( int k = 0 ; k < col1 ; k++) {
                    Matrix3[ i ][ j ] += ( Matrix1[ i ][ k ] * Matrix2[ k ][ j ] ) ;
                }//end for
            }//end for
        }//end for
//OUTPUT
        printf( "----------------------------------------------------\n" ) ;
        printf( "Array1\n" ) ;
        for( int i = 0 ; i < row1 ; i++ ) {
            printf( "    " ) ;
            for( int j = 0 ; j < col1 ; j++ ) {
                printf( "%d ", Matrix1[ i ][ j ] ) ; 
            }//end for
            printf( "\n" ) ;
        }//end for
        printf( "Array2\n" ) ;
        for( int i = 0 ; i < row2 ; i++ ) {
            printf( "    " ) ;
            for( int j = 0 ; j < col2 ; j++ ) {
                printf( "%d ", Matrix2[ i ][ j ] ) ; 
            }//end for
            printf( "\n" ) ;
        }//end for
        printf( "Array1 x Array2\n" ) ;
        for( int i = 0 ; i < row1 ; i++ ) {
            printf( "    " ) ;
            for( int j = 0 ; j < col2 ; j++ ) {
                printf( "%d ", Matrix3[ i ][ j ] ) ; 
            }//end for
            printf( "\n" ) ;
        }//end for

    }//end if
    else {
        printf( "----------------------------------------------------\n" ) ;
        printf( "\nMatrix1 and Matrix2 can't multiply!!!!" ) ;
    }//end else
    return 0 ;
}//end main