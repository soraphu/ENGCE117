#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main() {
    char out[20][10];
    int num_value = 0;
    int *num = &num_value;

    explode("I/Love/You", '/', out, num);
    printf( "%s", out[1] ) ;
    return 0;
}

void explode(char str1[], char splitter[], char str2[][10], int *count) {
    char *token;
    token = strtok(str1, splitter );
    while (token != NULL) {
        strcpy(str2[*count], token);
        token = strtok(NULL, token);
        (*count) ++;
    }
}
