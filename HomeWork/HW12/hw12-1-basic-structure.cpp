/*
    สร้าง Struct เพื่อเก็บข้อมูลของคน 2 คน โดยเก็บข้อมูล ชื่อ , อายุ , เพศ และคะแนนสะสม และแสดงผลออกมาบนหน้าจอ
    
    struct Person {
	    char  Name[20] ;
	    int   Age ;
	    int   Sex ;
	    float Score ;
	} ;
    
    Test case:
        Person A
        Name : 
            Mai
        Age : 
            24
        Sex : 
            M
        Score : 
            99.99

        Person B
        Name : 
            Mon
        Age : 
            21
        Sex : 
            F
        Score : 
            87.60

    Output:
        --| Person A Information |--
        Name : Mai (M)
        Age : 24 years old
        Score : 99.99 points
        --| Person B Information |--
        Name : Mon (F)
        Age : 21 years old
        Score : 87.60 points

*/
#include <stdio.h>

struct Person {
	char Name[ 20 ] ;
	int Age ;
	char Sex ;
	float Score ;
} ;

int main() {
    struct Person A ;//กำหนด struct A
    struct Person B ;//กำหนด struct B
    printf( "Person A\n" ) ;//Person A ---
    printf( "Name :\n    " ) ;
    scanf( "%s", A.Name ) ;
    printf( "Age :\n    " ) ;
    scanf( "%d", &A.Age ) ;
    printf( "Sex :\n    " ) ;
    scanf( "%s", &A.Sex ) ;
    printf( "Score :\n    " ) ;
    scanf( "%f", &A.Score ) ;
    printf( "Person B\n" ) ;//Person B ---
    printf( "Name :\n    " ) ;
    scanf( "%s", B.Name ) ;
    printf( "Age :\n    " ) ;
    scanf( "%d", &B.Age ) ;
    printf( "Sex :\n    " ) ;
    scanf( "%s", &B.Sex ) ;
    printf( "Score :\n    " ) ;
    scanf( "%f", &B.Score ) ;
    printf( "----------------------------------\n" ) ;//Output
    printf( "--| Person A Information |--\n" ) ;//Person A ---
    printf( "Name : %s (%c)\n", A.Name, A.Sex ) ;
    printf( "Age : %d years old\n", A.Age ) ;
    printf( "Score : %.2f points\n", A.Score ) ;
    printf( "--| Person A Information |--\n" ) ;//Person B ---
    printf( "Name : %s (%c)\n", B.Name, B.Sex ) ;
    printf( "Age : %d years old\n", B.Age ) ;
    printf( "Score : %.2f points\n", B.Score ) ;
}//end function