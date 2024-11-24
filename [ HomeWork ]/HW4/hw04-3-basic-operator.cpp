
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int a, b, c ;

int main(){
    printf( "Enter Value(a + b + c) : " ) ;
    scanf( "%d %d %d", &a, &b ,&c ) ;
    printf( "Answer = %d", a + b + c ) ;//แสดง a + b + c
    return 0 ;
}