/*
    ผู้ใช้กรอกตัวเลขเข้ามาในระบบ และให้คุณแปลงตัวเลขดังกล่าวให้เป็นตัวเลขโรมัน
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)

    Test case:
        8
    Output:
        8 = VIII

    Test case:
        4
    Output:
        4 = IV

    Test case:
        514
    Output:
        514 = DXIV

    Test case:
        929
    Output:
        929 = CMXXIX 

*/
#include <stdio.h>

int main() {
    int value[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;
    char roman[][ 3 ] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;
    int input ;
    scanf( "%d", &input ) ;
    for( int j = 0 ; j < 13 ; j++ ) {
        for( int i = 0 ; i < 13 ; i++ ) {//ไล่ดูตั้งแต่หลักแรกไปหลักสุดท้าย
            if( input >= value[ i ] ) {//ถ้าเจอหลักไหนเท่ากับ value[i] หรือมากกว่า
                printf( "%s", roman[ i ] ) ;//แสดงเลขโลมันที่[ i ]
                input -= value[ i ] ;//ลบหลักที่เท่ากับ value[i]
                break ;
            }//end if
        }//end for
        if( input == 0 ) break ;//เมื่อ input ถูกลบจนเหลือ 0 จะจบโประแกรม
    }//end while
    return 0 ;
}//end main