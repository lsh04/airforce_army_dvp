#include <stdio.h>

int order = 3; // order는 전역 변수

void chicken(){ // 매개변수 필요 없음
    for (; order >0; order--){
        printf("%d번째 자단 통닭\n",order);
    }
}

int main(){
    chicken();
    return 0;
}