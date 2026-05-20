#include <stdio.h>
#include <stdlib.h> // system()함수가 선언된 헤더 파일

// for (k=1; k<=100; k++){
//         system("cls"); // 화면 지우기
//             for (met = 0; met <= rand() % 80; met++){ // 0~79까지 무작위 수 생성
//                 printf("0");
//             }
//         printf("\n");
//     }


int main(){
    int k, jul, met;

    for (k=1; k<=100; k++){
        system("cls");
        for (jul=1; jul <=8; jul++){ // 사운드 미터의 줄 수
            for (met = 0; met <= rand() % 80; met++){ // 0~79까지 무작위 수 생성
                printf("0");
        }
        printf("\n");
        }
    }
    return 0;
}


