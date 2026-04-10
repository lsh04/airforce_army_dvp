#include <stdio.h>

int main() {
    FILE *fp = NULL;
    long pos;
    char ch;

    fp = fopen("1310_test.txt", "r");
    if (fp == NULL) {
        printf("파일 open 실패\n");
        return 1;
    }
    fseek(fp, 0, SEEK_END);
    pos = ftell(fp);
    fseek(fp,-1, SEEK_END);
    while(pos > 0){
        ch = fgetc(fp);
        printf("%c",ch);
        fseek(fp,-2,SEEK_CUR);
        pos--;
    }
    printf("\n");
    fclose(fp);
    return 0;
}