/*
    ผู้ใช้กรอกชื่อและความสูงของคนในโรงเรียนในห้อง A และห้อง B และเรียงลำดับของคนที่ตัวเล็กที่สุดไปยังตัวใหญ่ที่สุดในแต่ละห้อง และเรียงลำดับของคนทั้งโรงเรียนจากตัวที่ใหญ่ที่สุดมายังตัวเล็กที่สุด

    Test case:
        Room A
        Name : 
            John
        Height (cm) : 
            176.6
        Name : 
            Job
        Height (cm) : 
            177.5
        Name : 
            Aim
        Height (cm) : 
            149.8
        Name : 
            Mon
        Height (cm) : 
            158.9
        Name : 
            Ammy
        Height (cm) : 
            151.0
        Name : 
            A
        Height (cm) : 
            169.7
        Name : 
            -1

        Room B
        Name : 
            Komsam
        Height (cm) : 
            176.1
        Name : 
            Samart
        Height (cm) : 
            165.4
        Name : 
            Sunu
        Height (cm) : 
            168.1
        Name : 
            -1

    Output:
        Room A -> Aim Ammy Mon A John Job     ]
        Room B -> Samart Sunu Komsam          ] > น้อยไปมาก
        School -> Job John Komsam A Sunu Samart Mon Ammy Aim } มากไปน้อย
*/
#include <stdio.h>
#include <string.h>

struct person { //struct เก็บค่า 1 คน
    char name[ 50 ] ;
    float height ;    
} ;//end struct

void SortHeight( struct person std[][ 20 ], int count, int room ) ;//ฟังชั่นเรียงความสูงจากน้อบไปมากแล้วแต่ระบุห้อง
void SortAll( struct person school[], int count ) ;//ฟังชั่นเรียงความสูงจากมากไปน้อยด้วยคนทั้งสองห้อง

int main() {
    struct person std[ 2 ][ 20 ] ;//เก็บข้อมูล 2 ห้องไว้
    struct person school[ 40 ] ;//เป็บข้อมูลทั้งโรงเรียน
    int j = 0, C_num1, C_num2 ;//j ไว้ใช้นับรอบลูป num1 num2 เก็บจำนวนการป้อนข้อมูล
    
    for( int i = 0 ; i < 2 ; i++ ) { //ลูปเพื่อเก็บค่าห้อง 1,2( i คือ ห้อง )
        if( i == 0 ) printf( "**Room A**\n" ) ;
        if( i == 1 ) printf( "**Room B**\n" ) ;
        
        while( 1 ) { //วนเก็บค่านักเรียน
            printf( "Name :\n    " ) ;
            scanf( "%s", &std[ i ][ j ].name ) ;
            
            if( strcmp( std[ i ][ j ].name, "-1" ) == 0 ) {//เมื่อให้( name = "-1" )จะเก็บค่า( j )สุดท้ายแล้ว(break)
                if( i == 0 ) C_num1 = j ;
                if( i == 1 ) C_num2 = j ;
                j = 0 ;
                break ;
            }//end if

            printf( "Height (cm):\n    " ) ;
            scanf( "%f", &std[ i ][ j ].height ) ;
            j++ ;//j นับรอบ
        }//end while
        printf( "\n" ) ;
    }//end for

    printf( "---------------------------------\n" ) ;//Output
    SortHeight( std, C_num1, 0 ) ; //เรียงลำดับชื่อจากความสูงห้อง A
    printf( "Room A -> " ) ;
    for( int i = 0 ; i < C_num1 ; i++ ) printf( "%s ", std[ 0 ][ i ].name ) ;//แสดงชื่อที่เรียงแล้วห้อง A
    printf( "\n" ) ;

    SortHeight( std, C_num2, 1 ) ;//เรียงลำดับชื่อจากความสูงห้อง B
    printf( "Room B -> " ) ;
    for( int i = 0 ; i < C_num2 ; i++ ) printf( "%s ", std[ 1 ][ i ].name ) ;//แสดงชื่อที่เรียงแล้วห้อง B
    printf( "\n" ) ;

    for( int i = 0 ; i < C_num1 ; i++ ) school[ i ].height = std[ 0 ][ i ].height ;//บันทึกอาเรย์(height)ห้อง A ใส่ school
    for( int i = 0 ; i < C_num2 ; i++ ) school[ C_num1 + i ].height = std[ 1 ][ i ].height ;//บันทึกอาเรย์(height)ห้อง B ใส่ school
    for( int i = 0 ; i < C_num1 ; i++ ) strcpy( school[ i ].name, std[ 0 ][ i ].name ) ;//บันทึกอาเรย์(name)ห้อง A ใส่ school
    for( int i = 0 ; i < C_num2 ; i++ ) strcpy( school[ C_num1 + i ].name, std[ 1 ][ i ].name ) ;//บันทึกอาเรย์(name)ห้อง B ใส่ school
    SortAll( school, C_num1 + C_num2 ) ;//เรียงลำดับชื่อจากความสูงในอาเรย์ school

    printf( "School -> " ) ;
    for( int i = 0 ; i < C_num1 + C_num2 ; i++ ) printf( "%s ", school[ i ].name ) ;//แสดงชื่อใน school

    return 0 ;
}//end main

void SortAll( struct person school[], int count ) {
    for( int i = 0 ; i < 20 ; i++ ) {
        for( int j = 0 ; j < count ; j++ ) {
            int a = school[ j ].height ;
            int b = school[ j + 1 ].height ;
            char str_a[ 20 ] ; strcpy( str_a, school[ j ].name ) ;
            char str_b[ 20 ] ; strcpy( str_b, school[ j + 1 ].name ) ;      
            
            if( a < b ) {
                int temp = a ;
                a = b ;
                b = temp ;
                school[ j ].height = a ;
                school[ j + 1 ].height = b ;

                char str_temp[ 20 ] ; strcpy( str_temp, str_a ) ;
                strcpy( str_a, str_b ) ;
                strcpy( str_b, str_temp ) ;
                strcpy( school[ j ].name, str_a ) ;
                strcpy( school[ j + 1 ].name, str_b ) ;
            }//end if
        }//end for
    }//end for
}//end function

void SortHeight( struct person std[][ 20 ], int count, int room ) {
    for( int i = 0 ; i < 20 ; i++ ) {
            for( int j = 0 ; j < count - 1 ; j++ ) {
                int a = std[ room ][ j ].height ;
                int b = std[ room ][ j + 1 ].height ;
                char str_a[ 20 ] ; strcpy( str_a, std[ room ][ j ].name ) ;
                char str_b[ 20 ] ; strcpy( str_b, std[ room ][ j + 1 ].name ) ;      
                
                if( a > b ) {
                    int temp = a ;
                    a = b ;
                    b = temp ;
                    std[ room ][ j ].height = a ;
                    std[ room ][ j + 1 ].height = b ;

                    char str_temp[ 20 ] ; strcpy( str_temp, str_a ) ;
                    strcpy( str_a, str_b ) ;
                    strcpy( str_b, str_temp ) ;
                    strcpy( std[ room ][ j ].name, str_a ) ;
                    strcpy( std[ room ][ j + 1 ].name, str_b ) ;
                }//end if
            }//end for
    }//end for
}//end function