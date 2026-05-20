#include <stdio.h>

double ret_cent(double len){ //ret_cent 함수 정의
    return (len * 2.54); // double형 값의 반환
}

int main(){
    double conv, inch;

    printf("변환할 인치값: ");
    scanf("%lf", &inch);

    conv = ret_cent(inch); // 값 변환
    printf("%.2lf inch = %.2lf cm\n", inch, conv);

    return 0;
}