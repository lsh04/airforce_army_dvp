#include <stdio.h>

int main(){
    FILE *fp = NULL;
    long pos;

    fp = fopen("1309_test.txt", "w+");
    if (fp == NULL) {
        printf("파일 open 실패\n");
        return 1;
    }
    fputs("0123456789",fp);
    pos = ftell(fp);
    printf("현재 파일 위치 %d\n",pos);
    fseek(fp,2,SEEK_SET);
    printf("2, SEEK_SET값은 %c\n",fgetc(fp));
    fseek(fp,3,SEEK_CUR);
    printf("3, SEEK_CUR값은 %c\n", fgetc(fp));
    fseek(fp,-1,SEEK_END);
    printf("-1, SEEK_END값은 %c\n", fgetc(fp));

    fclose(fp);
    return 0;
}