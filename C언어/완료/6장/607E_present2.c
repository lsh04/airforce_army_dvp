#include <stdio.h>

int main(){
    int coupon, con;

    printf("쿠폰 갯수 입력: ");
    scanf("%d",&coupon);
    con = coupon / 10;

    switch(con) {
        case 2:
            printf("trip bag\n");
            break;
        case 1:
            printf("note\n");
            break;
        default:
            printf("a coffee");
    }
    return 0;
}

// 30개 이상 경우 반영 X
// 반영 코드 607_present.c 코드에서 확인