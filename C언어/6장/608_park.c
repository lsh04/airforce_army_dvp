#include <stdio.h>

int main() {
    int ticket;

    printf("1, 2, 3번 중 어떤 패키지를 구매하시겠습니까?: ");
    scanf("%d", &ticket);

    switch(ticket){
        case 1:
            printf("dolphin show ticket\n");
        case 2:
            printf("놀이기구 10종 티켓\n");
        default:
            printf("ticket\n");
    }
    return 0;
}