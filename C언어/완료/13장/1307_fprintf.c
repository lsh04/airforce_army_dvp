#include <stdio.h>

int main(){
    FILE *fp = NULL;

    fp = fopen("1307_test.txt","w");
    if (fp == NULL){
        printf("파일 open 실패\n");
        return 1;
    }
    printf("파일 쓰기 시작\n");
    fprintf(fp, "%s %d", "gildong", 1000);
    fprintf(fp, "%s %d", "hyungwook", 2000);

    fclose(fp);
    return 0;
}