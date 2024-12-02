#include <stdio.h>

int *GetSet( int **num, int input ) ;//ฟังชั่นรับค่าทีละใส่ทีละ array

int main() {
    int *data, *num, input ;
    printf( "### Input\n\n" ) ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &input ) ;//รับค่ามาเพื่อกำหนดจำนวนข้อมูล
    printf( "Enter the elements: " ) ;
    
    data = GetSet( &num, input ) ;//ให้ pointer data ชี้ไปยัง&ที่ GetSet ชี้
    printf( "\n\n### Output\n\n" ) ;
    printf( "Number of element: %d\n", input ) ;
    for ( int i = 0 ; i < input ; i ++ ) { //แสดงค่าที่เก็บใน Array[0 - n]
        printf( "%d ", *( data + i ) ) ;
    }//end for loop
    return 0 ;
}//end function

int *GetSet( int **num, int input ) {
    static int Data[ 50 ] ;//static เพื่อให้ค่าไม่ถูกลบเมื่อจบฟังชั่น
    *num = Data ;
    for ( int i = 0 ; i < input ; i ++ ) {
        scanf( "%d", &Data[ i ] ) ;
    }
    return *num ;
}
