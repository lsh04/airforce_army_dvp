#include<stdio.h>
#include<stdlib.h>

void sound_meter(int dan){
    int k, jul, met;

    for (k=1; k<=100; k++){
        system("cls");
        for (jul=1; jul <= dan; jul++){ // 사운드 미터의 줄 수
            for (met = 0; met <= rand() % 80; met++){ // 0~79까지 무작위 수 생성
                printf("0");
        }
        printf("\n");
        }
    }
}

int main() {
    sound_meter(8); // 8줄 사운드 미터

    return 0;
}