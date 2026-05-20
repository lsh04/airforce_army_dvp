#include <stdio.h>

void fry(int min, double milk) { // 정수형 miv, 실수형 milk
    printf("%.1lf분 우유에 재우기\n", milk);
    printf("튀김옷 입히기\n");
    printf("%d분 튀기기\n",min);
}

int main() {
    fry(6, 40.5); // fry 함수 호출

    return 0;
}