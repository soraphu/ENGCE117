/*
    ผู้ใช้กรอกข้อมูลพนักงานในบริษัท โดยจะกรอกข้อมูล ชื่อ, เงินเดือน, อายุการทำงาน ของแต่ละคน โดยเมื่อผู้ใช้กรอกตัว n จะถือเป็นการหยุดโปรแกรมและทำการแสดงข้อมูลเงินเดือนเฉลี่ยของพนักงานในบริษัท และเงินเดือนของทุกคนรวมกันที่ผู้บริหารต้องจ่าย และแสดงคนที่อายุงานเยอะที่สุดพร้อมระบุ ชื่อ เงินเดือน และอายุงาน ของคนๆ นั้น
    
    Test case:
        Do you want to Enter Employee Information? (y/n) : 
            y
        ----
        Employee Name : 
            Yorn
        Salary (Bath/Month) : 
            15000
        Duration (Year) : 
            4
        Do you want to Enter Employee Information? (y/n) : 
            y
        ----
        Employee Name : 
            Van
        Salary (Bath/Month) : 
            14550
        Duration (Year) : 
            2
        Do you want to Enter Employee Information? (y/n) : 
            y
        ----
        Employee Name : 
            Thane
        Salary (Bath/Month) : 
            22500
        Duration (Year) : 
            8
        Do you want to Enter Employee Information? (y/n) : 
            n
    Output:
        Average of Salary : 17,350.00 Bath
        Payment of every month : 52,050.00 Bath
        ----------------------------------------
        ** Most duration in this business **
        Name : Thane (8 Years)
        Salary : 22,500.00 Bath

*/

//TODO: #21 output money should in decimal format (eg. 120,200,340.42).
#include <stdio.h>
#include <string.h>

struct person { //struct ค่าของ 1 คน
    char name[ 50 ] ;
    float money ;
    int year ;
} ;//end struct

char Setcomm( float num ) ;//ฟังชั่นใส่คอมม่า

int main() {
    int i = 0, max_i = 0 ;// i ใช้นับ max_A ใช้เก็บค่าอาเรย์ที่เงินเดือนมากสุด
    float sum = 0, MaxNum = 0 ;//เก็บค่ารวม salary
    char yn ;//ใช้เก็บค่าเงื่อนไข y n
    struct person employ[ 20 ] ;//employ เก็บค่าข้อมูลได้ 20 คน
    while( 1 ) {
        printf( "Do you want to Enter Employee Information? (y/n) :\n    " ) ;
        scanf( "%s", &yn ) ;
        if( strcmp( &yn, "y" ) == 0 ) { //ถ้าตอบ y 
            getchar() ;//เพื่อล้างค่า \n หลังจาก scanf
            printf( "----------\n" ) ;
            printf( "Employee Name :\n    " ) ;
            gets( employ[ i ].name ) ;//เก็บชื่อ
            printf( "Salary (Bath/Month) :\n    " ) ;
            scanf( "%f", &employ[ i ].money ) ;//เก็บเงินเดือน
            printf( "Duration (Year) :\n    " ) ;
            scanf( "%d", &employ[ i ].year ) ;
            sum += employ[ i ].money ; 
            if( employ[ i ].money > MaxNum ) {//หาค่ามากสุดและเก็บ i
                MaxNum = employ[ i ].money ;
                max_i = i ;
            }//end if
            i++ ;
        }//end if
        else if( strcmp( &yn, "n" ) == 0 ) break ;//ถ้าตอบ n
        else printf( "***Invalid please enter 'y' or 'n'***\n" ) ;//ถ้าตอบอื่นๆ
    }//end while
    printf( "Output:\n    " ) ;
    printf( "Average of Salary : " ) ;
    Setcomm( sum / i ) ;//หาค่าเฉลี่ย
    printf( " Bath\nPayment of every month : " ) ;
    Setcomm( sum ) ;//เงินเดือนรวม
    printf( " Bath\n    ------------------------------------\n" ) ;
    printf( "** Most duration in this business **\n" ) ;
    printf( "Name : %s (%d Years)\n", employ[ max_i ].name, employ[ max_i ].year ) ;//แสดงข้อมูลคนเงินเดือนมากสุด
    printf( "Salary : " ) ;
    Setcomm( employ[ max_i ].money ) ;
    printf( " Bath" ) ;
    return 0 ;
}//end function

char Setcomm( float num ) {
    char str[ 20 ] ;
    int len ;
    sprintf( str, "%.2f", num ) ;//เปลี่ยน(num)เป็นรูปแบบสตริงแล้วเก็บใน(str)
    len = strlen( str ) ;//หาความยาวข้อความ(str)
    if( len >= 7 ) { //ถ้าตัวเลข(1K)ขึ้นไป
        for( int i = len ; i > ( len - 6 ) ; i -- ) {
            str[ i ] = str[ i - 1 ] ;//สลับสตริงเช่น[str = "1000"] จะทำการสลับจากหลังไปหน้าจน[str = "1 000"]
        }//end for
        str[ len - 6 ] = ',' ;//ใส่','ลงไปเช่นตัวอย่าง[1 000]จะเป็น[1,000]
        str[ len + 1 ] = '\0' ;
        printf( "%s", str ) ;
    }//end if
    else if( len >= 10 ) { //ถ้าตัวเลข(1M)ขึ้นไป 
        for( int i = len + 1 ; i > ( len - 6 ) ; i -- ) {
                str[ i ] = str[ i - 2 ] ;
        }//end for
        str[ len - 6 ] = ',' ;
        for( int i = len - 5 ; i > ( len - 9 ) ; i -- ) {
                str[ i ] = str[ i - 1 ] ;
        }//end for
        str[ len - 9 ] = ',' ;
        str[ len + 2 ] = '\0' ;
        printf( "%s", str ) ; 
    }//end else if
    else printf( "%s\n", str ) ;//number < 1K
}//end function