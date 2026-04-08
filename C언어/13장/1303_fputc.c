#include <stdio.h>

int main(){
    FILE *fp = NULL;
    char buf[14] = "This is a cow";
    int k;

    fp = fopen("1303_fputc file test.txt", "w");
    if (fp == NULL){
        printf("파일 open 실패");
        return 1;
    } 
    printf("1303_fputc file text.txt에 한 글자씩 쓰기\n");
    for (k=0; k<14; k++){
        fputc(buf[k], fp);
    }

    fclose(fp);

    return 0;
}