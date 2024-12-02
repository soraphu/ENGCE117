#include <stdio.h>

int input = 0 ;

int main() {
    printf( "### Input :\n\n" ) ;
    scanf( "%d", &input ) ;//รับค่าใส่ตัวแปร input
    printf( "\n### Output :\n\n" ) ;
    for( int i = 1 ; i <= input ; i ++ ) { 
        printf( "[%d] Hello world\n", i ) ;//ปริ้น("[ตัวแปร(i)] Hello world")โดย(i)จะเพิ่มขึ้นตั้ง(1 ถึงค่า input) 
    }//end for
    return 0 ;
}//end main