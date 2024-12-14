/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/

#include <stdio.h>

void swap( int *o1, int *o2 ) ;

int main() {
    char name1[ 50 ], name2[ 50 ] ;
    int old1, old2 ;
    printf( "INPUT A\n" ) ;
    printf( "Name :\n    " ) ;
    scanf( "%s", &name1 ) ;
    printf( "Age :\n    " ) ;
    scanf( "%d", &old1 ) ;
    printf( "INPUT B\n" ) ;
    printf( "Name :\n    " ) ;
    scanf( "%s", &name2 ) ;
    printf( "Age :\n    " ) ;
    scanf( "%d", &old2 ) ;
    printf( "Output :\n    " ) ;
    printf( "** RESULT **\n    " ) ;
    printf( "Name : %s (%d)\n    ", name1, old1 ) ;
    printf( "Name : %s (%d)\n", name2, old2 ) ;
    swap( &old1, &old2 ) ;
    printf( "\n    ** SWAP AGE **\n    " ) ;
    printf( "Name : %s (%d)\n    ", name1, old1 ) ;
    printf( "Name : %s (%d)", name2, old2 ) ;
}//end function

void swap( int *o1, int *o2 ) {
    int temp ;
    temp = *o1 ;
    *o1 = *o2 ;
    *o2 = temp ;
}//end function