#include <stdio.h>

char brief[] ;
char AnswerYN[] ;

int main() {
    printf( "[ กระบวนการในการรับงานทำเว็บไซต์จากลูกค้า ]\n" ) ;
    printf( "1. เตรียมโปรไฟล์ให้น่าดึงดูดและน่าเชื่อถือ\n" ) ;
    printf( "2. ประกาศรับงาน ลงรายละเอียดรับงานต่างๆและการรับประกัน\n" ) ;
    printf( "3. พูดคุยรับบรีฟจากลูกค้า\n" ) ;
    printf( "4. วิเคราะรายละเอียดงาน\n" ) ;
    printf( "5. สรุปรายละเอียด เสนอราคาและเงื่อนไขขอบเขตงาน\n" ) ;
    while( 1 ) {        
        printf( "   ลูกค้าตอบตกลงหรือไม่ y/n : " ) ; scanf( "%s", &AnswerYN ) ;
        if( strcmp( AnswerYN, "y" ) == 0 ) { //เงื่อนไข ถามลูกค้าตกลงหรือไม่ ตอบ y/n
            while( 1 ) {
                printf( "   เป็นงานใหญ่หรือไม่ y/n : " ) ; scanf( "%s", &AnswerYN ) ;
                if( strcmp( AnswerYN, "y" ) == 0 ) { //เงื่อนไข ถามเป็นงานใหญ่หรือไม่ y/n
                    printf( "-> มัดจำ 30 เปอร์เซ็น\n" ) ; break ;//print + ออก whileloop
                }//end if
                else if (  strcmp( AnswerYN, "n" ) == 0  ) {
                    printf( "-> มัดจำ 50 เปอร์เซ็น\n" ) ; break ;//print + ออก whileloop 
                }//end else if
                else printf( "  ( ข้อมูลไม่ถูกต้อง!! )\n" ) ;//เมื่อไม่ใส่ y หรือ n กลับไปถามใหม่ **
            }//end while
                printf( "6. เริ่มงาน\n" ) ;
                printf( "7. วางแผนการทำงาน\n" ) ;
                printf( "8. ทำตามแผนงาน\n" ) ;
                printf( "9. ทดสอบการทำงาน\n" ) ;
                printf( "10. ส่งงานให้ลูกค้าตรวจสอบ\n" ) ;
                while( 1 ) { //loop แก้งาน
                    printf( "   ลูกค้าพอใจหรือยัง y/n : " ) ; scanf( "%s", &AnswerYN ) ;//ถามความพอใจ
                    if( strcmp( AnswerYN, "y" ) == 0 ) break ;
                    else printf( "-> แก้ไขงาน\n" ) ; 
                }
                printf( "11. ทำต่อให้เสร็จสิ้น\n" ) ;
                printf( "12. ส่งไฟนอลให้ลูกค้า\n" ) ;
                while( 1 ) { //loop แก้งาน
                    printf( "   ลูกค้าพอใจหรือยัง y/n : " ) ; scanf( "%s", &AnswerYN ) ;//ถามความพอใจ
                    if( strcmp( AnswerYN, "y" ) == 0 ) break ;
                    else printf( "-> แก้ไขงาน\n" ) ; 
                } 
                printf( "13. ส่งมอบงานไฟล์งานและวิธีใช้\n" ) ;
                printf( "14. ปิดงานในระบบ ให้ลูกค้าอนุมัติและจ่ายตามที่ตกลง\n" ) ;
                printf( "15. เสนอบริการอื่นๆ\n" ) ;
                break ;
        }
        else if( strcmp( AnswerYN, "n" ) == 0 ) { 
            printf( "ไม่ได้งาน" ) ; break ;//continue
        }//end else if
        else printf( "  ( ข้อมูลไม่ถูกต้อง!! )\n" ) ;//เมื่อไม่ใส่ y หรือ n กลับไปถามใหม่ **
    }
    return 0 ;
}