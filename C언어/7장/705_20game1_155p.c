#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int com, user = -1; // 우연히 맞히는 경우를 제외하기 위해 -1로 초기화

    srand((unsigned)time(NULL));
    com = rand() % 20 + 1; // 1~20까지 무작위 수 생성

    while (com != user) {
        // comr과 user가 다를 경우 반복
        printf("1에서 20까지: ");
        scanf("%d",&user);

        if (com == user){
            printf("맞혔습니다!"); // 사용자가 맞춘 경우
        } else if (com > user) {
            printf("더 큰 숫자입니다.\n"); // 더 큰 숫자인 경우
        } else{
            printf("더 작은 숫자 입니다.\n"); // 더 작은 숫자인 경우
        }
    }
    return 0;
}