/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/
#include <stdio.h>

int input, num, c ;
float cpyC, cpyIn;

int main() {
    printf( "Enter value n\n    " ) ;
    scanf( "%d", &input ) ;
    for( int i = 1 ; i <= input ; i ++ ) { //ลูปแสดงฟังชั่นให้เท่ากับค่าที่ให้มาตั้งแต่ 1-n
        printf( "Enter number %d :\n    ", i ) ;
        scanf( "%d", &num ) ;
        c += num ;//กำหนดให้ c = c + num; #num คือค่าที่ให้มา
    }
    printf( "Sum = %d\n", c ) ;
    cpyC = c ; 
    cpyIn = input ; //กำหนดตัวแปรให้เท่ากับ c และ input เป็น float เพื่อคำนวณทศนิยม
    float Avg = cpyC / cpyIn ;//ค่ารวม / จำนวน input เพื่อหาค่าเฉลี่ย
    printf( "Avg = %.2f", Avg ) ;
}