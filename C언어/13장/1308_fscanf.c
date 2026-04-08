#include <stdio.h>

int main(){
    FILE *fp = NULL;
    char buf[80];
    int num;
    
    //int feof(FILE *fp)

    fp = fopen("1307_test.txt", "r");
    if(fp == NULL){
        printf("파일 open 실패\n");
        return 1;
    }

    
    // fscanf(fp,"%s %d", buf,&num);
    // printf("%s %d\n", buf, num);
    // fscanf(fp,"%s %d", buf, &num);
    // printf("%s %d\n", buf, num);

    // while 문으로 대체
    while (feof(fp) == 0) {
        fscanf(fp, "%s %d",buf ,&num);
        printf("%s %d\n",buf, num);
    }

    fclose(fp);
    return 0;
}