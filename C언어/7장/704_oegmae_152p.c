#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int com, user;
    int comwin = 0, userwin = 0, k;

    srand((unsigned)time(NULL));

    for (k=1; k<4; k++){
        com = rand() %2 + 1;
        printf("홀(1), 짝(2) 선택: ");
        scanf("%d", &user);

        if (com == user){
            printf("맞췄네요! 사용자 %d승\n", ++userwin);
        } else {
            printf("틀렸네요! 컴퓨터 %d승\n", ++comwin);
        }
        printf("\n사용자 %d승, 컴퓨터 %d승\n", userwin, comwin);

        if (comwin < userwin){
            printf("최종 우승 사용자 %d승\n", userwin);
        } else {
            printf("최종 우승 컴퓨터 %d승\n", comwin);
        }
    }
    return 0;
}