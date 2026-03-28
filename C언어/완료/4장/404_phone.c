#include<stdio.h>

int main(){
    int pay = 55000, period = 24; // 변수 선언과 동시에 초기화
    long total;

    total = pay *period; // *는 곱셈 연산자

    printf("기간 = %d\n",period); // 왼쪽 정령
    printf("매달 = %10d\n", pay); // %10d 10칸 출력, 오른쪽 정렬
    printf("총합 = %10ld\n", total); // %ld는 long decimal

    return 0;
}