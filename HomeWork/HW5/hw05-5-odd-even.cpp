/*
    จงรับตัวเลขจากผู้ใช้ และให้แสดงผลลัพธ์ว่าเป็นเลขคู่หรือเลขคี่
    
    Test case:
        Input :
            15

    Output:
        15 is an odd integer

    Test case:
        Input :
            -22

    Output:
        -22 is an even integer

*/
#include <stdio.h>

int input = 0 ;
int Result = 0 ;

int main() {
    printf( "Input :\n    " ) ;
    scanf( "%d", &input ) ;
    Result = input % 2 ;//การ % คือการหารเอาเศษเมื่อ input หาร 2 ได้เศษเท่าไหร่ก็จะเก็บไว้ใน Result
    if( Result != 0 ) {  
        printf( "%d is an odd integer", input ) ;
    }
    else {
        printf( "%d is an even integer", input ) ;
    }
    return 0 ;
}

