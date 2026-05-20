#include <stdio.h>

void minmize(){
    printf("창 크기 최소화\n");
}

void re_size(){
    printf("창 크기를 변경함\n");
}

void abort(){
    printf("프로그램을 종료함\n");
}

int main(){
    void (*button[3])() = {minmize, re_size, abort};
    int event;
    
    int executed[3] = {0, 0, 0}; // 실행 여부 저장

    // 첫 입력
    printf("이벤트 입력(최소화=0, 크기 변경=1, 프로그램 종료=2): ");
    scanf("%d", &event);

    if (executed[event] == 1){
        printf("이미 실행된 작업입니다\n");
    } else {
        button[event]();
        executed[event] = 1;
    }

    // 두 번째 입력
    printf("이벤트 입력(최소화=0, 크기 변경=1, 프로그램 종료=2): ");
    scanf("%d", &event);

    if (executed[event] == 1){
        printf("이미 실행된 작업입니다\n");
    } else {
        button[event]();
        executed[event] = 1;
    }

    return 0;
}

// executed 배열로 실행 여부를 기록하고, 입력값을 인덱스로 하여 중복 실행을 판단한다