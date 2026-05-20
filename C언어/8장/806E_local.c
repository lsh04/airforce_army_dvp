#include <stdio.h>

void chicken(int num) {
    for (int order =1; order<= num; order++){ // for문 안에 order 변수 선언
        printf("%d번재 자단통닭\n",order); // order변수 소멸
    }
    //printf("총 %d마리 통닭튀김\n", order);
}

int main(){
    int order = 3;

    chicken(order);

    return 0;
}