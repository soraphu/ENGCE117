/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)

    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 40320
*/

#include <stdio.h>
int main() {
    int num ;
    
    printf( "Input Number = " ) ;   
    scanf( "%d", &num ) ;//รับค่า
    printf( "%d! = ", num ) ;// num! = ? x ? ...
    
    int i = num ;
    int multi = i ;//multi คือผลคูณรวม
    
    while( i > 1 ) {// เมื่อค่าที่รับมากกว่า 1
        printf( "%d x ", i ) ;
        i -- ;//เมื่อเพื่อให้เป็นรูปแบบสมมุติ num = 3 , = 3 x 2 x 1
        multi *= i ; //รวมค่าไว่ใน multi
    }//end while
    
    printf( "%d\n", i ) ;//ปริ้น 1 หรือ 0
    printf( "%d! = %d", num, multi ) ;
}//end main