#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, add, k;
    double *dmp, sum = 0.0;

    printf("입력한 숫자는 몇 개?: ");
    scanf("%d", &max);
    dmp = (double *)calloc(max, sizeof(double)); // 동적 메모리 할당과 0으로 초기화

    printf("%d개 값을 입력하시오: ", max);
    for (k=0; k<max; k++){ // k가 0부터 max보다 작을 때까지 반복
        scanf("%lf", &dmp[k]);
        sum = sum + dmp[k];
    }
    printf("추가 숫자는 몇 개?: ");
    scanf("%d", &add);
    dmp = realloc(dmp, sizeof(double) * (max + add)); // 메모리 크기 변경

    printf("추가되는 %d개 값을 입력하시오: ", add); // max부터 max + add 보다 작을 때까지 반복
    for (k=max; k<(max+add); k++){
        scanf("%lf", &dmp[k]);
        sum = sum + dmp[k];
    }
    free(dmp);
    printf("평균 = %.1lf", sum/(max+add));

    return 0;
}