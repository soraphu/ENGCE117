/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/

#include <stdio.h>

char r1, r2, r3, r4 ;

int main() {
    scanf( "%c %c %c %c", &r1, &r2, &r3, &r4  ) ;
    printf( "Result: " ) ;
    printf( "%c %c %c %c",r4 ,r3, r2, r1 ) ;
    return 0 ;
}