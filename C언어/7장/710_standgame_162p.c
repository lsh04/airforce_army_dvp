// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int com, user, k;
//     int chip = 10, bet;

//     srand((unsigned)time(NULL));
//     for (k=1; k<6; k++) {
//         com = rand() %10 +1;    // 1~10까지 무작위 수 생성
//         user = rand() %10 + 1;  // 1~10까지 무작위 수 생성
//         printf("\nchip=%d you=%d 베팅(0은 포기): ", chip, user);
//         scanf("%d", &bet);

//         printf("com=%d: ", com);
//         if (bet<=0 || bet > chip) {
//             continue; // 이번 판 포기
//         }
//         if (com > user) {   //컴퓨터 승
//             chip = chip - bet; //베팅한 칩 사라짐
//             printf("컴퓨터 승! chip=%d\n", chip);
//         } else {            // 사용자 승
//             chip = chip + bet; // 베팅한 칩만큼 추가
//             printf("사용자 승! chip=%d\n", chip);
//         }
//         if (chip <= 0) {
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int com, user, k;
    int user_chip = 10;   // 사용자 칩
    int com_chip = 10;    // 컴퓨터 칩
    int bet;

    srand((unsigned)time(NULL));

    for (k = 1; k <= 5; k++) {
        com = rand() % 10 + 1;   // 1~10
        user = rand() % 10 + 1;  // 1~10

        printf("\n[%d판] user_chip=%d, com_chip=%d\n", k, user_chip, com_chip);
        printf("you=%d 베팅(0은 포기): ", user);
        scanf("%d", &bet);

        if (bet <= 0 || bet > user_chip) {
            printf("이번 판 포기\n");
            continue;
        }

        printf("com=%d: ", com);

        if (com > user) {   // 컴퓨터 승
            user_chip -= bet;
            com_chip += bet;
            printf("컴퓨터 승!\n");
        } else {            // 사용자 승
            user_chip += bet;
            com_chip -= bet;
            printf("사용자 승!\n");
        }

        printf("현재 chip → user:%d, com:%d\n", user_chip, com_chip);

        if (user_chip <= 0 || com_chip <= 0) {
            break;
        }
    }

    // 게임 종료 후 결과 비교
    printf("\n=== 게임 종료 ===\n");
    printf("최종 chip → user:%d, com:%d\n", user_chip, com_chip);

    if (user_chip > com_chip) {
        printf("사용자가 더 많은 칩을 보유하여 승리했습니다!\n");
    } else if (user_chip < com_chip) {
        printf("컴퓨터가 더 많은 칩을 보유하여 승리했습니다!\n");
    } else {
        printf("무승부입니다!\n");
    }

    return 0;
}

