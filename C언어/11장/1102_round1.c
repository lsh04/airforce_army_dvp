#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    char str[5] = "love";
    int k, m;

    for(k=0; k<30; k++){
        // system("cls");
        system("clear");
        for (m=0; m<4; m++){
            putchar(str[(m+k)%4]);
        }
        //system("timeout 1 > NULL"); windows 용 코드
        sleep(1);
    }
    return 0;
}


// windows OS 확인 필요/ Liux 환경에서도 정상작동 X
