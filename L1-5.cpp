#include <stdio.h>
#include <stdlib.h> 

void GetMatrix( int *value[], int *row, int *col ) ;
void law( int inM, int inN ) ;

int main() {
    int *data, m, n ;
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", &m ) ;//รับค่า(rows)
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", &n ) ;//รับค่า(col)
    GetMatrix( &data, &m, &n ) ;//เรียกใช้ฟังชั่น
    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    if( *row != 0 && *col != 0 ) printf( "Enter the matrix element: " ) ;
    for( int i = 0 ; i < *row * *col ; i ++ ) {
        value[ i ] = new int[ i ] ;//ให้พ้อยเตอร์(value[ i ])ชี้ไปยังพื้นที่ใหม่ที่จองไว้ด้วย(new int[ i ])
        scanf( "%d", value[ i ] ) ;//รับค่าใส่(value[ i ])ทีละตัว
        if( getchar() == '\n' &&  i == ( *row * *col ) - 2 ) { //ตรวจการ(Enter)และเทียบค่า
            printf( "\n### Output" ) ;
            printf( "\n\nError: Invalid matrix input" ) ;
			return ;
        }
    }//end for
    printf( "\n### Output\n\n" ) ;
    if( *row <= 1 || *col <= 1 ) { //เมื่อมีค่าใด <= 1 จะไม่บอกจำนวน(Matrix) ค่า m,n  
        if( *row == 0 && *col == 0 ) printf( "(empty)" ) ; //เมื่อค่าเท่ากับ(0)ทั้งหมดจะปริ้น(empty)
        else if( *row == 0 || *col == 0 ) printf( "Error: Invalid matrix dimensions." ); //เมื่อค่าใดเป็น(0)จะปรื้น(error)
        else printf( "Matrix:\n" ) ; 
    }
    
    if( *row > 1 && *col > 1 ) printf( "Matrix: (%dx%d):\n", *row, *col ) ; 
    //ปริ้นให้ออกมาในรูปแบบ(Matrix)
    for( int i = 0 ; i < *row ; i ++ ) { 
        for ( int j = 0 ; j < *col ; j ++ ) {
            printf( "%d ", *value[ i * *col + j ] ) ;
            if( j == *col - 1 ) printf( "\n" ) ;//เมื่อจบหนึ่งคอลัมน์จะทำการเว้นบรรทัดเพื่อแสดงเป็นลักษณะ(Matrix)
        }
    }//end for
    printf( "\n" ) ;
}//end function

/*
## TEST CASE
### Input
```bash
Enter the number of rows: 2
Enter the number of columns: 2
Enter the elements: 1 2 3
```
### Output
```bash
Error: Incorrect number of elements.
```
*/