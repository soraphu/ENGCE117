/*
    HR ของบริษัทเน็ตเวิร์คทำการกรอกข้อมูลพนักงานลงไปในระบบคำนวณฐานภาษีเพื่อเตรียมส่งยอดภาษีสู่ฝ่ายบัญชี โดยจะหักภาษี ณ ที่จ่าย 7% ของเงินเดือนที่ได้ ให้คุณคำนวณภาษีพนักงานทั้งหมดที่บริษัทของคุณต้องชำระภายในปีนี้ (กรอกเลข -1 ถือเป็นการสิ้นสุดการกรอก และทำการสรุปผลภาษีที่ต้องชำระภายในปีนี้) และสร้างฟังก์ชันที่ระบุคนที่ต้องชำระภาษีเยอะที่สุดในบริษัทมาแสดงในผลสรุปยอดของบริษัทด้วย
    (กำหนดให้ฟังก์ชันที่สร้างขึ้น ห้ามมีการใช้คำสั่ง return แต่สามารถส่งผ่านค่าแบบ pass by reference ได้เท่านั้น)

    Test case:
        Employee 1's Name : 
            Omar
        Sarary (Bath/Month) : 
            12750
        Employee 2's Name : 
            Alice
        Sarary (Bath/Month) : 
            15900
        Employee 3's Name : 
            Max
        Sarary (Bath/Month) : 
            19860
        Employee 4's Name : 
            -1
    Output:
        All salary per month: 48,510.00 Bath
        All salary per year: 582,120.00 Bath
        Tax (7% per year) : 40,748.40 Bath
        Most tax in company : Max (16,682.40 Bath per year)

    Test case:
        Employee 1's Name : 
            John
        Sarary (Bath/Month) : 
            15780
        Employee 2's Name : 
            Oven
        Sarary (Bath/Month) : 
            16890
        Employee 3's Name : 
            May
        Sarary (Bath/Month) : 
            17870
        Employee 4's Name : 
            Bill
        Sarary (Bath/Month) : 
            22100
        Employee 5's Name : 
            -1
    Output:
        All salary per month: 72,640.00 Bath
        All salary per year: 871,680.00 Bath
        Tax (7% per year) : 61,017.60 Bath
        Most tax in company : Bill (18,564.00 Bath per year)
*/
#include <stdio.h>
#include <string.h>

void MaxSal( int *Sal, int C, int *fMax ) ;//หาค่าตำแหน่งอาเรย์จำนวนมากสุด
void Setcomm( int len, char str[], float num ) ;//ใส่ค่าคอมม่าเลข(1k ถึง 100M)

int main() {
    int SalMN[ 20 ], count = 0, Max = 0, leng = 0 ;
    float sum = 0 ;//เก็บค่ารวม(salary)ทุกคน
    char name[ 20 ][ 50 ], str[ 20 ] ;//(name)เก็บชื่อ,(str)ใช้เก็บเลขที่เปลี่ยนเป็นสตริงเพื่อใส่คอมม่า
    while( 1 ) { //วนลูปรับค่า
        printf( "Employee %d's Name :\n    ", count + 1 ) ;
        scanf( "%s", name[ count ] ) ;
        if( strcmp( name[ count ], "-1" ) == 0 ) break ;//เมื่อ(name == "-1")ออกจาก(while)
        printf( "Sarary (Bath/Month) :\n    " ) ;
        scanf( "%d", &SalMN[ count ] ) ;
        sum += (float)SalMN[ count ] ;
        count ++ ;
    }//end while
    printf( "--------------------------------------------\n\n" ) ;//Output
    printf( "All salary per month: " ) ;//sal per month
    Setcomm( leng, str, sum ) ;
    printf( " Bath\n" ) ;
    printf( "All salary per year: " ) ;//sal per year
    Setcomm( leng, str, ( sum * 12 ) ) ;
    printf( " Bath\n" ) ;
    printf( "Tax (7%% per year) : " ) ;//tax per year
    Setcomm( leng, str, ( sum * 12 ) * 0.07 ) ;
    printf( " Bath\n" ) ;
    MaxSal( SalMN, count, &Max ) ;//คนที่เงินเดือนสูงสุด
    printf( "Most tax in company : %s (", name[ Max ] ) ;
    Setcomm( leng, str, ( SalMN[ Max ] * 12 ) * 0.07 ) ;
    printf( " Bath per year)" ) ;
}//end function

void MaxSal( int *Sal, int C, int *iMax ) {
    int max = 0 ;
    for( int i = 0 ; i < C ; i++ ) {
        if( *(Sal + i ) > max ) { //ถ้า(salที่i))มากกว่า(max) -> (max)เท่ากับ(salที่(i))
            max = *(Sal + i) ;
            *iMax = i ;//จำค่า(i)ตัวที่มากที่สุด
        }//end if
    }//end for
}//end function

void Setcomm( int len, char str[], float num ) {
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

