/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    (กำหนดให้ข้อนี้ใช้คำสั่ง for แทนคำสั่งเงื่อนไขได้เท่านั้น)
    
    Test case:
        enter score :
            80
    Output:
        A !

    Test case:
        enter score :
            55
    Output:
        D+ !

    Test case:
        enter score :
            64
    Output:
        C !

    Test case:
        enter score :
            44
    Output:
        F !
*/
#include <stdio.h>

void forGrade( int num, char out[5], int grade ) { //ใช้ฟังชั่นเพื่อลดบรรทัด
    for( ; num >= grade && num < grade + 5  ; ) {
        printf( "%s", out ) ;
        break ;
    }//end for
}//end function

int main() {
    int input ;
    printf( "enter score :\n    " ) ;
    scanf( "%d", &input ) ;
    for( ; input >= 85 ; ) { //การใช้(for)แทน(if) คำสั่ง for( คำสั่ง ; เงื่อนไข ; คำสั่ง ) ; เราจึงใช้ for(; เงื่อนไข ;) เพื่อใช้แค่เงื่อนไข
        printf( "A !" ) ;
        break ;//เมื่อทำงานเสร็จก็ break ; เมื่อจบลูป
    }//end for
    forGrade( input, "A !", 80 ) ;
    forGrade( input, "B+ !", 75 ) ;
    forGrade( input, "B !", 70 ) ;
    forGrade( input, "C+ !", 65 ) ;
    forGrade( input, "C !", 60 ) ;
    forGrade( input, "D+ !", 55 ) ;
    forGrade( input, "D !", 50 ) ;
    for( ; input < 50 ; ) {
        printf( "F !" ) ;
        break ;
    }//end for
}//end main