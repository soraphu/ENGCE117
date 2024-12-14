/*
    จงแสดงผลตัวแปรทั้งหมดเรียงลำดับดังนี้ a b c d

    Output:
        10 20.0 Haha a
*/
#include <stdio.h>

int main(){
    int a = 10 ;
    float b = 20 ;//กำหนดตัวแปรเป็น float เพื่อให้เลขมีทศนิยม
    char c[] = "Haha" ;
    char d = 'a' ;
    printf( "%d %.1f %s %c", a, b, c, d ) ; //TODO: #10 Display variable a, b, c and d.
    return 0 ;
}