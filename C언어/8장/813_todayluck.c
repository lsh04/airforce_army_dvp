#include  <stdio.h>
#include <stdlib.h>
#include <time.h>

int today_luck(int num) { //반환값이 정수이므로 int today_luck()
    int k, luck = 60, lkey; // 60포인트에서 시작 

    srand((unsigned)time(NULL));
    for (k=0; k<=20; k++){
        lkey = rand() % 20 + 1; // 1~20까지의 행운의 숫자 만들기 
        if (lkey != num){       // 행운 숫자와 같지 않으면
            luck = luck - k;    // luck에서 k 포인트를 뺌
            printf("행운수 %2d %2d포인트 사라짐 %4d 포인트\n", lkey, k, luck);
        }
        else break;             // 행운 숫자와 같은면 반복문 탈출
        //system("timeout 2 > NUL"); // 2초간 기다림 / windows용 코드
        system("sleep 2");
    }
    return luck;                // 남은 포인트 반환
}

int main(){
    int money, key;

    printf("starting point 60: 1~20 choise: ");
    scanf("%d", &key);

    money = today_luck(key); // today_luck() 함수에서 행운 포인트 반환
    printf("\n오늘은 %d포인트!\n", money);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #include <unistd.h>

// int today_luck(int num) {

//     int k, luck = 60, lkey;

//     for (k = 1; k <= 20; k++) {

//         lkey = rand() % 20 + 1;

//         if (lkey != num) {

//             luck -= k;

//             if (luck < 0)
//                 luck = 0;

//             printf("행운수 %2d %2d포인트 사라짐 %4d 포인트\n",
//                    lkey, k, luck);

//             if (luck == 0) {
//                 printf("포인트 소진!\n");
//                 break;
//             }
//         }
//         else {
//             printf("행운수 %2d 당첨!\n", lkey);
//             break;
//         }

//         sleep(2);
//     }

//     return luck;
// }

// int main() {

//     int key, money;

//     srand(time(NULL));

//     printf("starting point 60: 1~20 choice: ");
//     scanf("%d", &key);

//     money = today_luck(key);

//     printf("\n오늘은 %d포인트!\n", money);

//     return 0;
// }