#include <stdio.h>

#define DIA 7

int main(){
    const double PI = 3.14;
    double hegiht = 10.0;

    printf("라벨 높이 = %.2lfcm\n", hegiht);
    printf("라벨 폭 = %.2lfcm\n", PI*DIA);

    return 0;

}