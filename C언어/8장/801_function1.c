#include <stdio.h>

void fry(int min){ // min은 정수형 매개변수
    printf("우유에 재우기\n");
    printf("튀김옷 입히기\n");
    printf("%d분 튀기기\n",min);
} // return 문이 없으므로 void

int main(){
    fry(5);
    printf("고천 소스 바르기\n");

    return 0;
}