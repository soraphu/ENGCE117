#include <stdio.h>
#include <string.h>

void GetSet( int *data[], int *num ) ;

int main() {
    printf( "## Input\n\n" ) ;
    int *data, num, i ;
    GetSet( &data, &num ) ;//เรียกใช้ฟังชั่น GetSet
    printf( "## Output\n" ) ;
    return 0 ;
}//end function

void GetSet( int *data[], int *num ) {
    int input ;
    scanf( "%d", num ) ;
    for( int i = 0 ; i < *num ; i ++ ) { //รับค่าจากแป้นพิมจำนวนครั้งเท่ากับ *num - 1
        scanf( "%d", &data[ i ] ) ;
    }
}