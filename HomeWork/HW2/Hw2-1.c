#include <stdio.h>
#include <string.h>

void Question();

char Answer[ 5 ] ;//ตัวแปร Answer เก็บค่าคำตอบ yes หรือ no
char yes[][100] = { 
    "-> ไปซื้อที่เซเว่น\n", 
    "-> ขอตังแม่ไปซื้อ\n", 
    "-> บอกพ่อหรือแม่ว่าแก็สหมดสั่งให้หน่อยจะต้มมาม่า\n", 
    "-> บอกแม่ให้แม่ปรุงให้\n" 
} ;
char next[][100] = { 
    "-> เงินไม่พอใช่มั้ย? : ", 
    "2.กลับบ้าน เตรียมหม้อต้ม\n", 
    "7.รอจนน้ำเดือด\n", 
    "11.ใส่เครื่องปรุงแล้วคนให้เข้ากัน\n"  
};

int main() { //START MainFunction
    printf( "[ขั้นตอนการต้มมาม่า พิมพ์ yes หรือ no เพื่อตอบคำถาม]\n" ) ;
    printf( "1.เตรียมของ ไปซื้อของที่ตลาด\n" ) ;
    printf( "ของหมดหรือไม่ : " ) ;
//ตอบคำถามของหมดหรือไม่
    scanf("%s", &Answer) ;//รับค่าจากจากแป้นพิมพ์ yes หรือ no
    Question( Answer, yes[0], next[0] ) ;//เรียกใช้ฟังชั่น Question 
//ตอบคำถามเงินพอหรือไม่
    scanf( "%s", &Answer ) ;
    Question( Answer, yes[1], next[1] );//เรียกใช้ฟังชั่น Question 
//ต่อจาก 2.เตรียมหม้อต้ม
    printf( "3.แกะซองบะหมี่กึ่งสำเร็จรูป\n" ) ;
    printf( "4.ใส่น้ำลงในหม้อต้ม 300ml\n" ) ;
    printf( "5.เปิดแก็ส\n" ) ;
    printf( "6.นำบะหมี่กึ่งสำเร็จรูปไปต้ม\n" ) ;
    printf( "ระหว่างต้มมาม่าแก็สหมดหรือไม่ : " ) ;
//ตอบคำถามระหว่างต้มมาม่าแก็สหมดหรือไม่
    scanf( "%s", &Answer ) ;
    Question( Answer, yes[2], next[2] ) ;//เรียกใช้ฟังชั่น Question 
//ตอบคำถาม loop รอจนน้ำเดือด -> น้ำเดือดหรือยัง
    printf( "น้ำเดือดแล้วหรือยัง : " ) ;
    scanf( "%s", &Answer ) ;
    while( strcmp( Answer, "yes" ) != 0 ) { //วนลูปจนกว่าจะน้ำเดือด
        printf( "น้ำเดือดแล้วหรือยัง : " ) ;
        scanf( "%s", &Answer ) ;
        if( strcmp( Answer, "yes" ) == 0 ) break ; //หยุดวนรูปเมื่อตอบ yes
    } 
    printf( "8.ใส่บะหมี่กึ่งสำเร็จรูป\n" ) ;
    printf( "9.รอจนเส้นสุก\n" ) ;
//ตอบคำถาม loop เส้นสุกยัง
    printf( "เส้นสุกหรือยัง : " ) ;
    scanf( "%s", &Answer ) ;
    while( strcmp( Answer, "yes" ) != 0 ) { //วนลูปจนกว่าจะเส้นสุก
        printf( "เส้นสุกหรือยัง : " ) ;
        scanf( "%s", &Answer ) ;
        if( strcmp( Answer, "yes" ) == 0 ) break ; //หยุดวนรูปเมื่อตอบ yes
    }
    printf( "10.ปิดแก็ส\n" ) ;
    printf( "ในซองมาม่าไม่มีเครื่องปรุงใช่มั้ย : " ) ;
//ตอบคำถามในซองมีเครื่องปรุงหรือไม่
    scanf( "%s", &Answer ) ;
    Question( Answer, yes[3], next[3] ) ;//เรียกใช้ฟังชั่น Question
    printf( "เสร็จสิ้น" ) ;
    return 0 ;
}//END MainFunction
//ฟังชั่นรอง (คำถามตอบ yes หรือ no เพื่อแสดงวิธีแก้ปัญหาเมื่อเจออุปสรรค)  
void Question( char FunAnswer[], char Fyes[], char Fnext[] ) {
    if( strcmp( FunAnswer, "yes" ) == 0 ) { 
    printf( "%s", Fyes ) ;
    printf( "%s", Fnext ) ;
    }//endif
    else if( strcmp( FunAnswer, "no" ) == 0 ) { 
    printf( "%s", Fnext ) ;
    }//end else if
    else {
    printf( "โปรดระบุให้ถูกต้อง : " ) ;
    }//end else
    return 0 ;
}//EndFunction