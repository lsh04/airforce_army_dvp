#include <stdio.h>

void swap(int *one, int *two){ //swap() 함수 정의
    int temp;

    temp = *one;
    *one = *two;
    *two = temp;
}

int main() {
    int first = 7, second = 24;

    swap(&first, &second); // 참조에 의한 호출
    printf("f=%d, s=%d\n",first, second);

    return 0;

}