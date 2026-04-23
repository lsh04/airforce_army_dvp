#include <stdio.h>

int main(){
    int coupon;

    printf("쿠폰 개수 입력: ");
    scanf("%d", &coupon);

    if (coupon >= 20){
        printf("trip bag\n");
    } else if (coupon >= 10){
        printf("note\n");
    } else{
        printf("a coffee\n");
    }
}