#include <stdio.h>

enum {FALSE, TRUE}; // 이름 없는 열거형 정의

int main(){
    int rain;

    printf("비가 오나요? YES = 1, NO = 0: ");
    scanf("%d", &rain);

    if(rain == TRUE){
        printf("우산 준비\n");
    } else{
        printf("모자 준비\n");
    }
    printf("소개팅 간다.\n");
    return 0;
}