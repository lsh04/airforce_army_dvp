// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// // #include <windows.h> github codespace는 Linux 환경이므로 windows 라이브러리 활용x

// int main(){
//     char sadari[20][100], temp[100];
//     int j,k,m,max;

//     srand((unsigned)time(NULL)); // 무작위 함수 초기화
//     for (k=0; k<20; k++){
//         printf("항목 입력(엔터 종료): ");
//         gets_s(sadari[k],99);
//         if (strlen(sadari[k])<2){
//             break;
//         }
//     }
//     max = k;
//     for(k=0; k<20; k++){
//         m = rand() % max;
//         j = rand() % max;
//         strcpy(temp, sadari[m]);
//         strcpy(sadari[m],sadari[j]);
//         strcpy(sadari[j],temp);
//         system("cls");
//         for (m=0; m<max; m++){
//             printf("%d : %s\n", m ,sadari[m]);
//         }
//         Sleep(500);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>   // sleep, usleep

int main(){
    char sadari[20][100], temp[100];
    int j,k,m,max;

    srand((unsigned)time(NULL));

    for (k=0; k<20; k++){
        printf("항목 입력(엔터 종료): ");
        fgets(sadari[k], 100, stdin); // 변동부분

        // 개행 제거
        sadari[k][strcspn(sadari[k], "\n")] = 0; // 변동 부분

        if (strlen(sadari[k]) == 0){
            break;
        }
    }

    max = k;

    for(k=0; k<20; k++){
        if(max > 1){
            m = rand() % max;
            j = rand() % max;
        }
    

        strcpy(temp, sadari[m]);
        strcpy(sadari[m], sadari[j]);
        strcpy(sadari[j], temp);

        system("clear");  // Linux용 화면 지우기

        for (m=0; m<max; m++){
            printf("%d : %s\n", m ,sadari[m]);
        }

        usleep(500000); // 0.5초 (500ms)
    }

    return 0;
}