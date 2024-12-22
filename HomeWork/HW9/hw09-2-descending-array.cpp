/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"
    
    Test case:
        Input : 
            1
        Input : 
            5
        Input : 
            1
        Input : 
            4
        Input : 
            6
        Input : 
            9
        Input : 
            13
        Input : 
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/ // 1 2 3 4 6 2 1
#include <stdio.h>
int a, b, temp, input, ct ;
int Array[99] ;

int main() {
    while( input >= 0 ) {
        printf( "Input :\n    " ) ;
        scanf( "%d", &input ) ;
        Array[ ct ] = input ;
        ct ++ ;
    }
    //น้อยไปมาก
    for( int k = 0 ; k < ct - 1 ; k ++ ) { //ลูปการเรียงถึง n ครั้ง สมมุติ n = ct - 1
        for( int i = 0 ; i < ct - 2 ; i ++ ) { //กำหนด i เมื่อเลื่อนช่องที่ต้องการจาก 0 ถึง n
            if ( Array[ i ] > Array[ i + 1 ] ) { //เทียบค่าและจัดเรียงจากน้อยไปมาก 1 ครั้ง
                a = Array[ i ] ;
                b = Array[ i+1 ] ; 
                temp = b ;
                b = a ;
                a = temp ;
                Array[ i ] = a ;
                Array[ i+1 ] = b ;
            }
        }
    }//จบฟังชั่นน้อยไปมาก
    printf( "0-99 :" ) ;
    for( int i = 0 ; i < ct - 1 ; i ++ ) { //ปริ้นทีละตัวเรียงมากไปน้อย
        printf( " %d ", Array[ i ] ) ;
    }

    printf( "\n" ) ;//เว้นแบ่งกลาง

        //มากไปน้อย
    for( int k = 0 ; k < ct - 1 ; k ++ ) { //ลูปการเรียงถึง n ครั้ง สมมุติ n = ct - 1
        for( int i = 0 ; i < ct - 1 ; i ++ ) { //กำหนด i เมื่อเลื่อนช่องที่ต้องการจาก 0 ถึง n
            if ( Array[ i ] < Array[ i + 1 ] ) { //เทียบค่าและจัดเรียงจากมากไปน้อย 1 ครั้ง
                a = Array[ i ] ;
                b = Array[ i+1 ] ;
                temp = a ;
                a = b ;
                b = temp ;
                Array[ i ] = a ;
                Array[ i+1 ] = b ;
            }
        }
    }//จบฟังชั่นมากไปน้อย
    printf( "99-0 :" ) ;
    for( int i = 0 ; i < ct - 1 ; i ++ ) { //ปริ้นทีละตัวเรียงน้อยไปมาก
        printf( " %d ", Array[ i ] ) ;
    }
}