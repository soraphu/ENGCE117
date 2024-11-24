/*
    ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ F อยู่ในช่วงคะแนนน้อยกว่า 50 , D อยู่ในช่วงระหว่าง 50 ถึง 55 , D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , C อยู่ในช่วงระหว่าง 60 ถึง 65 , C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , B อยู่ในช่วงระหว่าง 70 ถึง 75 , B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป
    #TODO #20 : fix this code without if else syntax. 
    (กำหนดให้ข้อนี้ใช้คำสั่ง switch case ได้เท่านั้น)
    
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

int i ;

int main() {
    printf( "enter score :\n    " ) ;
    scanf( "%d", &i ) ;
    int Grade = ( i >= 80 ) ? 1 : ( i >= 75 ) ? 2 : ( i >= 70 ) ? 3 : ( i >= 65 ) ? 4 : ( i >= 60 ) ? 5 : ( i >= 55 ) ? 6 : ( i >= 50) ? 7 : 8 ;
    //int Grade = (i >=80 ) ? 1 : ( i>=75 ) ? 2 ... ( i>=50 ) ? 7 : 8 ; คือถ้า i>=80 ให้ i=1 ถ้าไม่แล้ว i>=75 มั้ยถ้าใช่ i=2 ถ้าไม่ก็จะไปในช่องถัดไป
    //คือ condition ? value_if_true : value_if_false;
    switch ( Grade ) {
        case 1 :
            printf( "A !" ) ; break ;   
        case 2 :  
             printf( "B+ !" ) ; break ;
        case 3 :  
             printf( "B !" ) ; break ;
        case 4 :  
             printf( "C+ !" ) ; break ;
        case 5 :  
             printf( "C !") ; break ;
        case 6 :  
             printf( "D+ !" ) ; break ;
        case 7 :  
             printf( "D !" ) ; break ;
        default :
            printf( "F !" ) ; break ;
    }
    return 0;
}