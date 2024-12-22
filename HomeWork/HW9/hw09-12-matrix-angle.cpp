/*
    ผู้ใช้กรอกค่า Matrix แบบลูกบาศก์ลงใน Matrix พร้อมกับบรรจุค่าลงไปจนครบ และแสดงค่าภายใน Matrix ... จากนั้นรับค่าการแสดงผลการเปลี่ยนแปลง Matrix โดยหากรับค่า 1 จากผู้ใช้ ให้แสดงด้านมุมซ้ายของ Matrix ด้วยเลข 0 ... หากผู้ใช้กรอก -1 ให้แสดงมุมขวาของ Matrix ด้วยเลขศูนย์ (ดูตัวอย่างการแสดงผลได้ใน Test Case)
    
    Test case:
        Input cube size : 
            3
        Input element :
            1 2 3
            4 5 6
            7 8 9
        Show zero (1=Left, -1=Right) :
            1
    Output:
        Matrix =
            1 2 3
            4 5 6
            7 8 9
        Left Matrix =
            1 2 3
            0 5 6
            0 0 9

    Test case:
        Input cube size : 
            4
        Input element :
            1 2 3 3
            2 5 9 9
            7 5 3 4
            2 1 3 1
        Show zero (1=Left, -1=Right) :
            -1
    Output:
        Matrix =
            1 2 3 3
            2 5 9 9
            7 5 3 4
            2 1 3 1
        Right Matrix =
            1 0 0 0
            2 5 0 0
            7 5 3 0
            2 1 3 1
*/
#include <stdio.h>
int main() {
    int num, set ;
    
    printf( "Input cube size :\n    " ) ;
    scanf( "%d", &num ) ;
    int Matrix[ num ][ num ] ;
    printf( "Array1 element :\n" ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "    " ) ; 
        for( int j = 0 ; j < num ; j++ ) { 
            scanf( "%d", &Matrix[ i ][ j ] ) ;
        }//end for
    }//end for

    while( 1 ) {
        printf( "Show zero (1=Left, -1=Right) :\n    " ) ; 
        scanf( "%d", &set ) ;
        if( set == 1 || set == -1 ) {
            printf( "Matrix =\n" ) ;
            for( int i = 0 ; i < num ; i++ ) {
                printf( "    " ) ; 
                for( int j = 0 ; j < num ; j++ ) { 
                    printf( "%d ", Matrix[ i ][ j ] ) ;
                }//end for
                printf( "\n" ) ; 
            }//end for
        }//end if
        if( set == 1 ) {
            printf( "Matrix Left =\n" ) ;
            for( int i = num - 1 ; i >= 0 ; i-- ) {
                for( int j = i - 1 ; j >= 0 ; j-- ) {
                    Matrix[ i ][ j ] = 0 ;
                }//end for
            }//end for
            break ;
        }//end if
        else if( set == -1 ) {
            printf( "Matrix Right =\n" ) ;
            for( int i = 0 ; i < num ; i++ ) {
                for( int j = i + 1 ; j < num ; j++ ) {
                    Matrix[ i ][ j ] = 0 ;
                }//end for
            }//end for
            break ;
        }//end else
        else printf( "( Invalid answer!!! )\n" ) ;
    }//end while
    
    for( int i = 0 ; i < num ; i++ ) {
        printf( "    " ) ; 
        for( int j = 0 ; j < num ; j++ ) { 
            printf( "%d ", Matrix[ i ][ j ] ) ;
        }//end for
        printf( "\n" ) ; 
    }//end for

    return 0 ;
}//end function


