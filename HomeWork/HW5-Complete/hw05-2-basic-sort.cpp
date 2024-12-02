/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/
#include <stdio.h>

int in1, in2, in3 ;//ใช้เก็บค่าอินพุตจากผู้ใช้

int main() {
    printf( "Input[1] :\n   " ) ;
    scanf( "%d", &in1 ) ;
    printf( "Input[2] :\n   " ) ;
    scanf( "%d", &in2 ) ;
    printf( "Input[3] :\n   " ) ;
    scanf( "%d", &in3 ) ;
    if( in1 > in2 && in2 > in3 ) printf( "%d %d %d", in1, in2, in3 ) ; //กระบวนการเปรียบเทียบค่าและแสดงจากมากไปน้อย
    else if( in1 > in3 && in3 > in2 ) printf( "%d %d %d", in1, in3, in2 ) ;
    else if( in2 > in1 && in1 > in3 ) printf( "%d %d %d", in2, in1, in3 ) ;
    else if( in2 > in3 && in3 > in1 ) printf( "%d %d %d", in2, in3, in1 ) ;
    else if( in3 > in1 && in1 > in2 ) printf( "%d %d %d", in3, in1, in2 ) ;
    else printf( "%d %d %d", in3, in2, in1 ) ;
    return 0 ;
}//end