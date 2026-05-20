#include <stdio.h>

int order = 3; //전역 변수 order 선언

void chicken(){
    printf("chicken()의 order값 %d\n", order);
}

int main(){
    int order = 7; // 지역 변수 order 선언

    chicken();
    printf("main()의 order값 %d\n", order);

    return 0;
}
