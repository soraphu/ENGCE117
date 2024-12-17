/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 4 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    Test case:
        Student A
        Name : 
            Yorn
        Score : 
            21.42

        Student B
        Name : 
            Omen
        Score : 
            56.00

        Student C
        Name : 
            Alice
        Score : 
            80.75

        Student D
        Name : 
            Violet
        Score : 
            67.76

    Output:
        Alice Violet Omen Yorn
        80.75 67.76 56.00 21.42

    Test case:
        Student A
        Name : 
            Payna
        Score : 
            77.77
            
        Student B
        Name : 
            Zanis
        Score : 
            88.88

        Student C
        Name : 
            Lubu
        Score : 
            66.66

        Student D
        Name : 
            Krixi
        Score : 
            99.99

    Output:
        Krixi Zanis Payna Lubu
        99.99 88.88 77.77 66.66
*/
#include <stdio.h>
#include <string.h>

struct student {
    char name[ 50 ] ;
    float score ;
} ;//end function

int main() {
    struct student stds[ 4 ] ;
    for( int i = 0 ; i < 4 ; i++ ) {
        if( i == 0 ) printf( "Student A\n" ) ;
        if( i == 1 ) printf( "Student B\n" ) ;
        if( i == 2 ) printf( "Student C\n" ) ;
        if( i == 3 ) printf( "Student D\n" ) ;
        printf( "Name :\n    " ) ;
        scanf( "%s", stds[ i ].name ) ;
        printf( "Score :\n    " ) ;
        scanf( "%f", &stds[ i ].score ) ;
    }//end if

    for( int i = 0 ; i < 4 ; i++ ) {// เรียง score & name
        for( int j = 0 ; j < 4 ; j++ ) {
            float a = stds[ j ].score ;
            float b = stds[ j + 1 ].score ;
            char Str_a[ 50 ] ;
            char Str_b[ 50 ] ;
            strcpy( Str_a, stds[ j ].name ) ;
            strcpy( Str_b, stds[ j + 1 ].name ) ;
            if( a < b ) {
                
                float temp = a ;
                a = b ;
                b = temp ;

                char Str_temp[ 50 ] ;
                strcpy( Str_temp, Str_a ) ;
                strcpy( Str_a, Str_b ) ;
                strcpy( Str_b, Str_temp ) ;
                
                stds[ j ].score = a ;
                stds[ j + 1 ].score = b ;
                strcpy( stds[ j ].name, Str_a ) ;
                strcpy( stds[ j + 1 ].name, Str_b ) ;

            }//end if
        }//end for
    }//end for
    
    printf( "%s %s %s %s\n", stds[ 0 ].name, stds[ 1 ].name, stds[ 2 ].name, stds[ 3 ].name ) ;
    printf( "%.2f %.2f %.2f %.2f", stds[ 0 ].score, stds[ 1 ].score, stds[ 2 ].score, stds[ 3 ].score ) ;
}//end function