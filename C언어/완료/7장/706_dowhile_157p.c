#include <stdio.h>

int main(){
    int num;

    do {
        printf("\n홀(1), 짝(2) 선택: ");
        scanf("%d", &num);
        
        // if문 추가로 입력
        if(num < 1 || num > 2){
            printf("다시 입력해 주십시오\n");
        }
        
    } while (num < 1 || num > 2);

    printf("\n홀(1), 짝(2) 중 하나를 입력하셨네요");

    return 0;
}