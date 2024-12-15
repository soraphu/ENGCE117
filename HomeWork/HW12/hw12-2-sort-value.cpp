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

struct student {
    char name[ 50 ] ;
    float score ;
} ;

void point( char *p_name, float *p_score ) ;

int main() {
    struct student A ;
    struct student B ;
    struct student C ;
    struct student D ;
    for( int i = 0 ; i < 4 ; i++ ) {
        if( i == 0 ) {
            printf( "Studen A \n" ) ;
            point( A.name, &A.score ) ;
        }//end if
        if( i == 1 ) {
            printf( "Studen B \n" ) ;
            point( B.name, &B.score ) ;
        }//end if
        if( i == 2 ) {
            printf( "Studen C \n" ) ;
            point( C.name, &C.score ) ;
        }//end if
        if( i == 3 ) {
            printf( "Studen D \n" ) ;
            point( D.name, &D.score ) ;
        }//end if
    }//end for
    printf( "Output :\n    " ) ;
    printf( "%s %s %s %s\n    ", A.name, B.name, C.name, D.name ) ;
    printf( "%.2f %.2f %.2f %.2f", A.score, B.score, C.score, D.score ) ;
}//end function

void point( char *p_name, float *p_score ) {
    printf( "Name :\n    " ) ;
    scanf( "%s", p_name ) ;
    printf( "Score :\n    " ) ;
    scanf( "%f", p_score ) ;
}//end void