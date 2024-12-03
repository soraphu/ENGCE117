#include <stdio.h>
#include <string.h>

//ฟังชั่นเพื่อการแยกตัวอักษรออกจากกันด้วยอักขระที่กำหนดและเก็บไว้ในตัวแปร str2
void explode( char str1[], char splitter[], char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num = 0 ; 
    char InputStr[ 99 ] ;
    printf( "## Input\n\n" ) ;
    gets( InputStr ) ;// gets รับอินพุตที่เป็นสตริงรวมถึง(" ")ได้
    explode( InputStr, ",:! -*/", out, &num ) ;//เรียกใช้ฟังชั่น
    printf( "\n## Output\n\n" ) ;
    for (int i = 0 ; i < num ; i ++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;// คำสั่ง(\")เพื่อให้สามารถปริ้นฟันหนูได้
    }//end for
    printf( "count = %d", num ) ;
    return 0;
}//end function

void explode(char str1[], char splitter[], char str2[][10], int *count) {
    char *token ;
    token = strtok( str1, splitter ) ;//(token)ชี้ไปยัง(strtok), (strtok)ทำการใส่(NULL)เข้าไปในตัวที่ตรงกับ(splitter)
    while( token != NULL ) { 
        strcpy( str2 [ *count ], token ) ;
        token = strtok( NULL, splitter ) ;//เรียกใช้ค่าตำแหน่งถัดไปที่จดจำไว้
        ( *count ) ++ ;//ให้ค่าที่แสดงที่พ้อยเตอร์(count)ชี้++
    }//end while
}//end function


 