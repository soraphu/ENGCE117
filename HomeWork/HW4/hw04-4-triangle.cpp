/*
    เขียนโปรแกรมเพื่อคำนวณหาพื้นที่สามเหลี่ยม เมื่อผู้ใช้กรอกค่าได้เพียง 2 ค่าคือ ส่วนสูง และ ฐาน เช่น ส่วนสูง 6 และฐานคือ 2 ดังนั้นพื้นที่สามเหลี่ยมคือ (6x2)/2 = 6
    สูตร 1/2 x ฐาน x สูง =    
    Test case:
        Enter H & W :
            6 2
    Output:
        Triagle Area : 6.0

    Test case:
        Enter H & W :
            3 5
    Output:
        Triagle Area : 7.5
*/
#include <stdio.h>

int H = 0, W = 0 ;

int main(){
    printf( "Find triagle area\n" ) ;
    printf( "Enter [H & W] : " ) ; 
    scanf( "%d %d", &H, &W ) ;
    float TriArea = 0.5 * W * H ;//นำเลขที่ได้มาคำนวณด้วยสูตรการหาพื่นที่สามเหลี่ยม
    printf( "Triagle Area : %.1f", TriArea ) ;//ตอบ
}//end 