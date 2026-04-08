#include <stdio.h>

int main() {
    FILE *fp = NULL;
    char c;

    fp = fopen("1303_fputc file test.txt", "r");
    if (fp == NULL){
        printf("파일 open 실패\n");
        return 1;
    }
    while ((c = fgetc(fp)) != EOF){
        putchar(c);
    }
    printf("\n");
    fclose(fp);

    return 0;
}