#include <stdio.h>

#include <unistd.h>



int main() {

char cwd[1024];
getcwd(cwd, sizeof(cwd));
printf("현재 작업 디렉토리: %s\n", cwd); // 현재 작업 실행 위치 확인 코드

    FILE *fpr = NULL, *fpw = NULL;
    char buf[80];

    //fpr = fopen("/C언어/13장/1306_text.txt", "r");
    fpr = fopen("/workspaces/airforce_army_dvp/C언어/13장/1306_test.txt", "r");
    fpw = fopen("/workspaces/airforce_army_dvp/C언어/13장/1306_text_b.txt", "w");

// if (fpr == NULL) {
//     perror("읽기 파일 오류");
// }
// if (fpw == NULL) {
//     perror("쓰기 파일 오류");
// }

    if (fpr == NULL || fpw == NULL) {
        printf("파일 open 실패\n");
        return 1;
    }

    printf("파일 복사 시작\n");
    fgets(buf,80,fpr);
    fputs(buf, fpw);

    // fclose(fpr);
    // fclose(fpw); 하단 while문으로 파일 전체 내용 복사

    while (fgets(buf,80,fpr) != NULL){ // NULL이 아닌 EOF 작성시 무한 루프
        fputs(buf,fpw);
    }
    
    return 0;

}