/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000.00)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>
#include <string.h>

void commas( int len, char str[] ) {
    for( int i = len ; i > ( len - 6 ) ; i -- ) {
            str[ i ] = str[ i - 1 ] ;
    }
    str[ len - 6 ] = ',' ;
    str[ len + 1 ] = '\0' ;
    printf( "%s", str ) ;
}

int main() {
    char ID[ 10 ] ;
    int hrs, len ;
    float num ;
    char str[50] ;
    //INPUT
    printf( "Input the Employees ID(Max. 10 chars):\n    " ) ;
    scanf( "%s", ID ) ;
    printf( "Input the working hrs:\n    " ) ;
    scanf( "%d", &hrs ) ;
    printf( "Salary amount/hr:\n    " ) ;
    scanf( "%f", &num ) ; 
    //OUTPUT
    printf( "Expect Output :\n    " ) ;
    printf( "Employees ID = %s\n    ", ID ) ;
    //Salary commas
    printf( "Salary = U$ " ) ;
    num *= hrs ;
    sprintf( str, "%.2f", num ) ;
    len = strlen( str ) ;
    if( len == 7 ) commas( len, str ) ; //x1K
    else if( len == 8 ) commas( len, str ) ; //x10K
    else if( len == 9 ) commas( len, str ) ; //x100K
    else if( len == 10 ) { //x1M 
        for( int i = len + 1 ; i > ( len - 6 ) ; i -- ) {
                str[ i ] = str[ i - 2 ] ;
        }
        str[ len - 6 ] = ',' ;
        for( int i = len - 5 ; i > ( len - 9 ) ; i -- ) {
                str[ i ] = str[ i - 1 ] ;
        }
        str[ len - 9 ] = ',' ;
        str[ len + 2 ] = '\0' ;
        printf( "%s", str ) ; 
    }
    else printf( "%s", str ) ;
}



