#include <stdio.h>
int main() { 
    char FirstName[ 50 ], LastName[ 50 ] ;
    printf( "First Name: " ) ;
    scanf( "%s", &FirstName ) ;//รับชื่อจากผู้ใช้
    printf( "Last Name: " ) ;
    scanf( "%s", &LastName ) ;//รับนามสกุลจากผู้ใช้
    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", FirstName, LastName ) ;//แสดงชื่อนามสกุลต่อด้วย TC, RMUTL, Chiang Mai, Thailand
    return 0 ;
    }//end function