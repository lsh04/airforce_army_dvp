#include<stdio.h>

int main(){
    double fnum = 3.141592653;

    printf("double = %lf\n", fnum); //소수점 이하 6자리까지 출력
    printf("double = %.9lf\n", fnum); // 소수점 이하 9자리 까지 출력

    return 0;
}