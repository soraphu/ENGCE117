//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h>

int main() {
  int a = 10 ;
  int b = 20, c = 30, d = 40 ; 
  printf( "This is %d + %d = %d\n", a, b, a + b ) ;
  for( int i = 0 ; i < d - c ; i ++ ) {
    if( i < c ) {
      printf( "Here " );
      if( i == 8 ) printf( "This is 8. " ) ;
    } 
    printf( "ok " ) ;
  }
  return 0 ;
}