#include <stdio.h>
#include <stdlib.h>

int main(){
    int ch;

    while (1) { // 무한반복

        ch = getchar();
        if (ch != EOF){
            putchar(ch);
        } else break;
    }

    // while ((ch = getchar()) !=EOF){ putchar(ch);} 
    // 7행 ~ 12행까지 코드와 동일 코드
    
    return 0;

}