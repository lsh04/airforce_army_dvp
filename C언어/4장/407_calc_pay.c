#include <stdio.h>

int main(){
    int pay = 10850; // 시급 10850원
    double hour = 42.5, total;

    total = pay * hour;
    printf("시급 %d, %.1lf시간 일함\n", pay, hour);
    printf("총합 = %12.1lf\n", total); // %lf는 double
    
    return 0;
}