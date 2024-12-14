/*
    ให้เข้าโปรแกรมสุ่มตัวเลขเข้าไปใส่ในตัวแปรอาเรย์ขนาด N ช่อง โดยที่ตัวแปร N คือค่าที่ผู้ใช้กรอกเข้ามา จากนั้นให้คุณเขียนโปรแกรมเพื่อหาค่าที่มากที่สุด และค่าที่น้อยที่สุดภายในตัวแปรอาเรย์นี้ พร้อมทั้งแสดงข้อมูลทุกอย่างภายในอาเรย์ออกมา
    (กำหนดให้ค่าที่สุ่มมา มีช่วงข้อมูลอยู่ที่ 10-99 เท่านั้น)
    (กำหนดให้การแสดงผลแบบชิดขอบขวา 2 ช่องเท่านั้น)

    Test case:
        Input N : 
            11
    Output:
        Index:  0  1  2  3  4  5  6  7  8  9 10
        Array: 99 18 27 16 74 28 43 47 25 10 88

        Max = 99
        Min = 10

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)) ;//ตั้งค่า seed ด้วยเวลาปัจจุบัน
    int num, Num_Min = 99, Num_Max = 0 ;
    printf( "Input N :\n    " ) ;
    scanf( "%d", &num ) ;//รับค่าผู้ใช้
    printf( "\n\nIndex:" ) ;
    for( int i = 0 ; i < num ; i++ ) {//แสดง 0 - n
        printf( " %2d", i ) ;
    }//end for
    printf( "\nArray: " ) ;
    for( int i = 0 ; i < num ; i++ ) {
        int Ran_num = ( rand() % ( 99 - 10 + 1 ) ) + 10 ; //สุ่มเลขในช่วง 10-99
        if( Num_Max < Ran_num ) Num_Max = Ran_num ;//เก็บค่ามากสุด
        if( Num_Min > Ran_num ) Num_Min = Ran_num ;//เก็บค่าน้อยสุด
        printf( "%d ", Ran_num ) ;//แสดงเลขที่สุ่มได้ ณ ปัจจุบัน
    }//end for
    printf( "\n\n" ) ;
    printf( "Max = %d\n", Num_Max ) ;//แสดงค่ามากสุด
    printf( "Min = %d", Num_Min ) ;//แสดงค่าน้อยสุด
    return 0 ;
}//end function