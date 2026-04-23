#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int com, user;

    srand((unsigned)time(NULL));

    printf("가위0 바위1 보2 선택: ");
    scanf("%d", &user);
    com = rand() %3;
    printf("com = %d, user = %d\n", com, user);

    if(com == user){
        printf("무승부");
    } else if(com > user){
        printf("com win");
    } else {
        printf("user win");
    }

    return 0;
}