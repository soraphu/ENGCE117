#include <stdio.h>
#include <string.h>

//ฟังชั่นเพื่อการแยกตัวอักษรออกจากกันด้วยอักขระที่กำหนดและเก็บไว้ในตัวแปร str2
void explode( char str1[], char splitter[], char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num = 0 ; 
    printf( "## Input\n\n" ) ;
    explode( "I/,:-Love//-,:You", ":-,/", out, &num ) ;//เรียกใช้ฟังชั่น
    printf( "\n## Output\n\n" ) ;
    for (int i = 0 ; i < num ; i ++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;// คำสั่ง(\")เพื่อให้สามารถปริ้นฟันหนูได้
    }//end for
    printf( "count = %d", num ) ;
    return 0;
}//end function

void explode(char str1[], char splitter[], char str2[][10], int *count) {
    char str01[ 50 ] ;//กำหนดมาแก้ไขปัญหา
    strcpy( str01, str1 ) ;//(strcpy)ก็อป(string)จาก(str1)ไปใส่(str01)
    //บรรทัดบนเกิดขึ้นเพราะการกำหนดสตริงใส่ไปตรงๆผ่านฟังชั่นทำให้สตริงนั้นเป็นค่าคงที่ไม่สามารถแก้ไขได้ แล้วคำสั่ง(strtoken)เป็นคำสั่งที่จะต้องแก้ไขสตริงเพื่อเปลี่ยนอักขระเป็น(NULL)     
    char *token ;
    printf( "%s\n\n", str01 ) ;
    token = strtok( str01, splitter ) ;//คำสั่ง(strtok)จะรับสตริงที่ให้มา(str01)แล้วตรวจหาคำที่เหมือนกับสตริงที่นำมาเทียน(splitter)แล้วใส่(NULL)และจดจำตำแหน่งต่อไปเอาไว้
    while( token != NULL ) { //ลูปเมื่อจุดไหน != NULL จะทำการใส่ไปยัง str2[ ที่ *count ]
        strcpy( str2 [ *count ], token ) ; //ก็อปแต่ละ token ใส่ str2[ ที่ *count ]
        token = strtok( NULL, splitter ) ; //เรียกใช้ค่าตำแหน่งถัดไปที่จดจำไว้
        ( *count ) ++ ; //ให้ค่าที่แสดงที่พ้อยเตอร์ count ชี้ ++
    }//end while
}//end function

/*
## TEST CASE
### Input
```bash
Hello World From Me

```
### Output
```bash
str2[0] = "Hello"
str2[1] = "World"
str2[2] = "From"
str2[3] = "Me"
count = 4
*/