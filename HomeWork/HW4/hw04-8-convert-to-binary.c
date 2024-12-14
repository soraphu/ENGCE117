/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>

char hex[]  ;
int i = 0 ;

int main() {
    printf( "User input :\n    " ) ;
    scanf( "%s", &hex ) ;//รับค่าจากผู้ใช้
    while ( hex[ i ] != '\0' ) { //เลือกดูช่องที่ 1 ถึง n เพื่อแปลงเลขฐานที่ละช่องให้ครบทุกช่องหากช่องนั้นไม่ใช้ช่องว่างเพื่อแปลงได้มากกว่า 1 ตัว
        switch ( hex[ i ] ) { //i เท่ากับช่องของตัวอักษรเช่น hex = "A9" > hex[ 0 ] > ช่องแรกของ hex คือ 'A' เท่ากับเป็น case 'A'
            case '0' : printf( "0000" ) ; break ;
            case '1' : printf( "0001" ) ; break ;
            case '2' : printf( "0010" ) ; break ;
            case '3' : printf( "0011" ) ; break ;
            case '4' : printf( "0100" ) ; break ;
            case '5' : printf( "0101" ) ; break ;
            case '6' : printf( "0110" ) ; break ;
            case '7' : printf( "0111" ) ; break ;
            case '8' : printf( "1000" ) ; break ;
            case '9' : printf( "1001" ) ; break ;
            case 'A' : 
            case 'a' : printf( "1010" ) ; break ;
            case 'B' : 
            case 'b' : printf( "1011" ) ; break ;
            case 'C' : 
            case 'c' : printf( "1100" ) ; break ;
            case 'D' : 
            case 'd' : printf( "1101" ) ; break ;
            case 'E' : 
            case 'e' : printf( "1110" ) ; break ;
            case 'F' : 
            case 'f' : printf( "1111" ) ; break ;
            default : printf( " ค่าเลขฐาน16 ไม่ถูกต้อง!!! " ) ;
        }//end switch case
        i++;//ให้ i++ เพื่อเลือกดูช่องถัดไป 
    }//end while
    return 0 ;
}//end