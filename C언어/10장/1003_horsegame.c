// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int horse[12] = {0}; // horse[]  말의 현재 위치 저장
//     int go = 1, win, k,m; //win 승리한 말의 번호    int go = 1, win, k,m; //win 승리한 말의 번호

//     srand((unsigned)time(NULL));
//     while (go) {
//         system("cls");
//         for (k=0;k<12; k++){
//             horse[k] = horse[k] + rand() % 10; // 무작위 수 누적
//             for (m = 0; m<horse[k]; m++) { // 말 위치까지 공백 생성  
//                 printf(" ");
//             } printf("%d:>\n\n", k);
//              if (horse[k] > 100) { // 결승점 도착하면
//                 win = k;            // win = 승리한 말 번호 
//                 go =0;              // while 종료
//             }   
//         }
//         system("timeout 1 > NULL"); // 1초간 지연
        
//     }
//     printf("\n<%d번 말 승리 >\n", win);
//     return 0;
    
// }

// =================================================================================== 수정 버전


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>

// int main() {
//     int horse[12] = {0};
//     int go = 1, win, k, m;

//     srand((unsigned)time(NULL));

//     while (go) {
//         system("clear");

//         for (k = 0; k < 12; k++) {
//             horse[k] += rand() % 10;

//             for (m = 0; m < horse[k]; m++) {
//                 printf(" ");
//             }
//             printf("%d:>\n\n", k);

//             if (horse[k] > 100) {
//                 win = k;
//                 go = 0;
//             }
//         }

//         sleep(1);
//     }

//     printf("\n<%d번 말 승리>\n", win);
//     return 0;
// }

// =================================================================================== 도착지점 시각화 버전

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define FINISH 100

int main() {
    int horse[12] = {0};
    int go = 1, win, k, m;

    srand((unsigned)time(NULL));

    while (go) {
        system("clear");

        for (k = 0; k < 12; k++) {
            horse[k] += rand() % 10;

            for (m = 0; m < horse[k]; m++) {
                printf(" ");
            }

            printf("%d:>", k);

            for (m = horse[k]; m < FINISH; m++) {
                printf(" ");
            }

            printf("|\n");

            if (horse[k] >= FINISH) {
                win = k;
                go = 0;
            }
        }

        sleep(1);
    }

    printf("\n<%d번 말 승리>\n", win);
        return 0;
}
