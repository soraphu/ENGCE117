#include <stdio.h>

int* GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    printf( "### Input\n\n" ) ;
    scanf( "%d %d", &m, &n ) ;//ใส่ค่า matrix m x n
    data = GetMatrix( &m, &n ) ;//เรียกใช้ฟังชั่น
    printf( "\n\n### Output\n\n" ) ;
    printf( "Enter number of rows and columns: %d %d\n", m, n ) ;//แสดงค่า m และ n
    printf( "Enter matrix element:\n" ) ;
    for( int i = 0 ; i < m ; i ++ ) { //ลูป for rows
        for( int j = 0 ; j < n ; j ++ ) { //ลูป for cols
            printf( "%d ", *( data + ( i * n + j ) ) ) ; //ปริ้นตั้งแต่ data[ 0 ถึง n ] หรือจนครบ array ที่พ้อยเตอร์ data ชี้
            if( j == n - 1 ) printf( "\n" ) ; //เมื่อ j ++ จนจะครบลูปของ j จะเว้นบรรทัดหรือคือจะเว้นบรรทัดทุกครบที่แสดง matrix n ครบแล้ว 
        }
    }//end for
    return 0 ;//end program
}//end function

int* GetMatrix( int *row, int *col ) {
    int *arr ; 
    arr = new int[ *row * *col ] ;
    for( int i = 0 ; i < *row ; i ++ ) {
        for( int j = 0 ; j < *col ; j ++ ) {
            scanf( "%d", &arr[ i * *col + j ] ) ;
        }
    }//end for
    return arr ;//คืนค่าพ้อยเตอร์ arr ซึ่งเป็น array 1มิติ
}