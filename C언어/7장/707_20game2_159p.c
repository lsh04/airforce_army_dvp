#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int com, user;

    srand((unsigned)time(NULL));
    com = rand() %20 +1;

    while(1){
        printf("1에서 20까지 : ");
        scanf("%d", &user);

        if (com == user){
            printf("맞혔습니다!");
            break;
        } else if (com > user) {
            printf("더 큰 숫자 입니다.\n");
        } else {
            printf("더 작은 숫자 입니다.\n");
        }
    }
    return 0;
}