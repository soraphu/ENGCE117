/*
    ผู้บริหารต้องการวิเคราะห์พัฒนาการของพนักงานในบริษัทและศักยภาพของพนักงานจากทักษะที่พัฒนาขึ้นของแต่ละคน ซึ่งแปลงค่าความสามารถของแต่ละคนออกมาเป็นค่า EXP โดยแบ่งอัตราการขึ้นเงินเดือนของแต่ละคนดังนี้
    EXP อยู่ในช่วง 0-1,000 		จะได้รับเงินเดือน x1
	EXP อยู่ในช่วง 1,000-2,000 	จะได้รับเงินเดือน x1.2
	EXP อยู่ในช่วง 2,000-3,000 	จะได้รับเงินเดือน x1.4
	EXP อยู่ในช่วง 3,000-4,000 	จะได้รับเงินเดือน x1.6
	EXP อยู่ในช่วง 4,000-5,000 	จะได้รับเงินเดือน x1.8
	EXP อยู่ในช่วง 5,000 ขึ้นไป	จะได้รับเงินเดือน x2
    โดยผู้บริหารมอบหมายให้ HR เป็นคนกรอกข้อมูลพนักงานในบริษัทและประเมินค่า EXP ของพนักงานแต่ละคน พร้อมสรุปจำนวนคนที่ได้รับเงินเดือนในแต่ละขั้น และระบุคนชื่อคนที่ได้เงินเดือนเยอะที่สุด และคนที่เงินเดือนน้อยที่สุด (หากกรอกเลข -1 ในช่อง Name จะถือเป็นการหยุดโปรแกรมและเตรียมแสดงผล)
    
    Test case:
        Employee 1 Name : 
            Atom
        EXP : 
            2500
        Employee 2 Name : 
            Aom
        EXP : 
            3230
        Employee 3 Name : 
            Aim
        EXP : 
            4560
        Employee 4 Name : 
            Jom
        EXP : 
            5505
        Employee 5 Name : 
            On
        EXP : 
            950
        Employee 6 Name : 
            Oom
        EXP : 
            3500
        Employee 7 Name : 
            Ky
        EXP : 
            2600
        Employee  Name : 
            -1
    Output:
        **** Salary Result ****
        x1.0 count 1
        x1.2 count 0
        x1.4 count 2
        x1.6 count 2
        x1.8 count 1
        x2.0 count 1
        The Employee get x2.0 is Jom
        The Employee get x1.0 is On

    Test case:
        Employee 1 Name : 
            Aey
        EXP : 
            9956
        Employee 2 Name : 
            J
        EXP : 
            4900
        Employee 3 Name : 
            A
        EXP : 
            4560
        Employee 4 Name : 
            Orio
        EXP : 
            200
        Employee 5 Name : 
            Vistra
        EXP : 
            1656
        Employee 6 Name : 
            Oh
        EXP : 
            2300
        Employee  Name : 
            -1
    Output:
        **** Salary Result ****
        x1.0 count 1
        x1.2 count 1
        x1.4 count 1
        x1.6 count 0
        x1.8 count 2
        x2.0 count 1
        The Employee get x2.0 is Aey
        The Employee get x1.0 is Orio
*/
#include <stdio.h>
#include <string.h>

struct person {
    char name[ 50 ] ;
    int exp ;
} ;

int save_cnt( struct person emp[], int ct[], int j ) ;

int main() {
    struct person EMP[ 50 ] ;
    char yn ;
    int i = 0, min = 5000, max = 0, Smin, Smax ;
    int multi[6] ;
    while( 1 ) {
        printf( "Employee %d Name :\n    ", i + 1 ) ;
        gets( EMP[ i ].name ) ;
        if( strcmp( EMP[ i ].name, "-1" ) == 0 ) break ;
        printf( "Exp :\n    " ) ;
        scanf( "%d", &EMP[ i ].exp ) ; 
        getchar() ;
        if( max < EMP[ i ].exp ) {
            max = EMP[ i ].exp ;
            Smax = i ;
        }//end if
        if( min > EMP[ i ].exp ) {
            min = EMP[ i ].exp ;
            Smin = i ;
        }//end if
        i++ ;
    }//end while
    save_cnt( EMP, multi, i ) ;
    printf( "**** Salary Result ****\n" ) ;
    printf( "x1.0 count %d\n", multi[ 0 ] ) ;
    printf( "x1.2 count %d\n", multi[ 1 ] ) ;
    printf( "x1.4 count %d\n", multi[ 2 ] ) ;
    printf( "x1.6 count %d\n", multi[ 3 ] ) ;
    printf( "x1.8 count %d\n", multi[ 4 ] ) ;
    printf( "x2.0 count %d\n", multi[ 5 ] ) ;
    printf( "The Employ that get x2.0 is %s\n", EMP[ Smax ].name ) ;
    printf( "The Employ that get x1.0 is %s", EMP[ Smin ].name ) ;//*/
}//end function

int save_cnt( struct person emp[], int ct[], int j ) {
    for( int i = 0 ; i < 6 ; i++ ) {
        ct[ i ] = 0 ;
    }//end for
    for( int i = 0 ; i < j ; i++ ) {
        if( emp[ i ].exp <= 1000 ) ct[ 0 ] += 1 ;
        else if( emp[ i ].exp <= 2000 ) ct[ 1 ] += 1 ;
        else if( emp[ i ].exp <= 3000 ) ct[ 2 ] += 1 ;
        else if( emp[ i ].exp <= 4000 ) ct[ 3 ] += 1 ;
        else if( emp[ i ].exp <= 5000 ) ct[ 4 ] += 1 ;
        else ct[ 5 ] += 1 ;
    }//end for
}//end function


