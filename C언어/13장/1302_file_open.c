#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("1302_fileopen test.txt","r");
    if (fp == NULL){
        printf("파일 open 실패\n");
        return 1;
    } 
    else {
        printf("파일 open 성공\n");
    }
    fclose(fp);

    return 0;
}