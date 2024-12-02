#include <stdio.h>

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &m ) ;//รับค่า(rows)
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", &n ) ;//รับค่า(col)
    printf( "Enter the matrix element: " ) ;
    GetMatrix( &data, &m, &n ) ;//เรียกใช้ฟังชั่น
    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    for( int i = 0 ; i < *row * *col ; i ++ ) {
        value[ i ] = new int[ i ] ;//ให้พ้อยเตอร์(value[ i ])ชี้ไปยังพื้นที่ใหม่ที่จองไว้ด้วย(new int[ i ])
        scanf( "%d", value[ i ] ) ;//รับค่าใส่(value[ i ])ทีละตัว
    }
    //ปริ้นให้ออกมาในรูปแบบ(Matrix)
    printf( "\n### Output\n\n" ) ;
    printf( "Matrix (%dx%d):\n", *row, *col ) ;
    for( int i = 0 ; i < *row ; i ++ ) { 
        for ( int j = 0 ; j < *col ; j ++ ) {
            printf( "%d ", *value[ i * *col + j ] ) ;
            if( j == *col - 1 ) printf( "\n" ) ;//เมื่อจบหนึ่งคอลัมน์จะทำการเว้นบรรทัดเมื่อให้แสดงเป็นลักษณะ(Matrix)
        }
    }
    printf( "\n" ) ;
}//end function