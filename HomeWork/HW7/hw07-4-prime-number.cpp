/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include <stdio.h>
int main() {
    int num ;
    printf( "Enter Number :\n    " ) ;
    scanf( "%d", &num ) ;
    int prime ; 
    int i = num ;
    printf( "---------------------------------------------------------------------------------------\n" ) ;
    while( i >= 2 ) {
        prime = 1 ;//จำนวนเฉพาะ = 1 
        int j = 2 ;
        while( ( j * j ) <= i ) {
            if( i % j == 0 ) {
                prime = 0 ;//กำหนดเป็น 0 เพื่อให้รู้ว่าไม่เป็นจำนวนเฉพาะ 
                break ;
            }//end if
            j++ ;
        }//end for
        if( prime == 1 ) {
        printf( " %d", i ) ;
        }//end if
        i-- ;
    }//end for
    return 0 ;
}//end main