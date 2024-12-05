/*
    จงเขียนโปรแกรมเพื่อแปลงอุณหภูมิ โดยรับมาจากผู้ใช้เป็นองศาเซลเซียส และแปลงเป็นฟาเรนไฮต์
    
    Test case:
        User input :
            22
    Output:
        22 degree Celsius = 71.6 degree Fahrenheit

    Test case:
        User input :
            36
    Output:
        36 degree Celsius = 96.8 degree Fahrenheit
*/
#include <stdio.h>

int degC = 0 ; 

int main(){
    printf( "User Input : " ) ;
    scanf( "%d", &degC ) ;
    float degF = degC * 1.8 + 32 ;//สูตรแปลง input องศาเป็นฟาเรนไฮต์แล้วเก็บในตัวแปร degF
    printf( "%d degree Celsius = %.1f degree Fahrenheit", degC, degF ) ;//result
}//end