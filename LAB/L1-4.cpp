#include <stdio.h>

int GetSet( int *data[] ) ;//ประกาศฟังชั่น#ระบุจำนวนรับข้อมูลและรับข้อมูลใส่ใน array

int main() {
    int *data, num  ;
    printf( "### Input\n\n" ) ;
    printf( "Enter the number of elements: " ) ;
    num = GetSet( &data ) ;//เก็บ return ไว้ใน num
    printf( "\n\n### Output\n\n" ) ;
    printf( "Number of element: %d\n", num ) ;
    for ( int i = 0 ; i < num ; i ++ ) { //วนจนครบทุก array ที่พอยเตอร์ data ชี้ไป
        printf( "%d ", *( data + i ) ) ;
    }
    return 0 ;//จบโปรแกรม
}//end function

int GetSet( int *data[] ) {
    int input ;//เอาไว้เก็บค่าระบุจำนวนข้อมูล
    static int SaveNum[ 50 ] ;//static เพื่อให้ค่าไม่ถูกลบเมื่อจบฟังชั่น
    scanf( "%d", &input ) ;
    printf( "Enter the elements: " ) ;
    for ( int i = 0 ; i < input ; i ++ ) { //ให้พอยเตอร์ data ที่ i ชี้ไป &SaveNum ที่ i และสแกนค่าลง SaveNum ที่ i
        data[ i ] = &SaveNum[ i ] ;
        scanf( "%d", &SaveNum[ i ] ) ;
    }
    return input ;//return ค่าที่ระบุจำนวนข้อมูล
}//end function

