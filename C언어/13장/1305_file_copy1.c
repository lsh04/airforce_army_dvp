#include <stdio.h>

int main(){
    FILE *fpr = NULL, *fpw = NULL;
    char c;

    fpr = fopen("1305_test.txt", "r");
    fpw = fopen("1305_test_b.txt", "w");
    if (fpr == NULL || fpw == NULL){
        printf("파일 open 실패\n");
        return 1;
    }
    printf("파일 복사 시작\n");
    while ((c = fgetc(fpr)) != EOF){
        fputc(c, fpw);
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}