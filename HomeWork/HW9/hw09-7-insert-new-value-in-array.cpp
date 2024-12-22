/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/
#include <stdio.h>
int main() {
    int num ;
    printf( "Enter new element of Array :\n    " ) ;
    scanf( "%d", &num ) ;
    int arr[ 5 + num ] = { 9, 2, 6, 1, 7 } ;

    for( int i = 5 ; i < num + 5 ; i++ ) { //เพิ่มข้อมูลเข้าไปในอาเรย์
        printf( "Input\n    " ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    printf( "Old Array: " ) ;//แสดงอาเรย์เก่า
    for( int i = 0 ; i < 5 ; i++ ) printf( "%d ", arr[ i ] ) ;

    for( int i = 0 ; i < num + 4 ; i ++ ) { //ลูปให้อาเรย์เรียงจากน้อยไปมาก(ลูปจำนวนครั้ง)
        for( int j = 0 ; j < num + 4 ; j ++ ) {//(ลูปอาเรย์ที่ 0 ถึง n )
            
            if( arr[ j ] > arr[ j + 1 ] ) { //จัดเรียง 1 คู่
                int temp = arr[ j ] ;
                arr[ j ] = arr[ j + 1 ] ;
                arr[ j + 1 ] = temp ; 
            }//end if

        }//end for
    }//end for

    printf( "\nNew Array: " ) ;
    for( int i = 0 ; i < num + 5 ; i++ ) printf( "%d ", arr[ i ] ) ; //ปริ้นอาเรย์ทั้งหมด
    
    return 0 ;
}//end main