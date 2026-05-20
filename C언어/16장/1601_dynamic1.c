#include <stdio.h>
#include <stdlib.h>

int main(){
    int max, k;
    double *dmp, sum = 0.0;

    printf("입력하는 숫자는 몇 개?");
    scanf("%d", &max);
    dmp = (double *)malloc(sizeof(double) * max); // 동적 메모리 할당

    printf("%d개 값을 입력하시오: ", max);
    for (k=0; k<max; k++){ // k가 0부터 max보다 작을 때 까지 반복
        scanf("%lf", &dmp[k]);
        sum = sum + dmp[k];
    }
    free(dmp); // 동적 할당 메모리 해제
    printf("평균 = %.1lf\n",sum / max);

    return 0;

}