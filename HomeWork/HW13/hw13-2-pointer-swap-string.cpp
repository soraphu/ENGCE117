/*
    ผู้ใช้พิมพ์ข้อความเข้ามาในระบบ และให้คุณทำการแสดงการกลับตัวอักษรทั้งหมดที่ผู้ใช้กรอกมา เช่น ผู้ใช้กรอกมาว่า Hello World คุณจะต้องแสดงบนหน้าจอว่า dlroW olleH
    (กำหนดให้เขียนวิธีการสลับ โดยใช้ตัวแปรประเภท Pointer เท่านั้น)

    Test case:
        Hello world
    Output:
        dlrow olleH

    Test case:
        RMUTL
    Output:
        LTUMR

    Test case:
        Orio
    Output:
        oirO

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[ 50 ] ;
    char *ptr ;
    int leng ;
    gets( str ) ;
    leng = strlen( str ) ;//หาความยาวสตริง(str)
    printf( "\n" ) ;
    for( int i = leng ; i >= 0 ; i-- ) { //แสดงค่าไล่จากหลังสุดไปหน้าสุด
        ptr = &str[ i ] ;
        printf( "%c", *ptr ) ; 
    }//end for
}//end function

