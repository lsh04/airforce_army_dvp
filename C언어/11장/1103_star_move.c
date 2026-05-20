// ----------------- Mac, Linux 환경 -----------------

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int pos = 0, ch, k;

//     printf("*");

//     while ((ch = getchar()) != 'q') {

//         if (ch == '1' && pos > 0){
//             pos--;
//         }

//         if (ch == '2'){
//             pos++;
//         }

//         system("clear");

//         for (k = 0; k < pos; k++){
//             printf(" ");
//         }

//         printf("*\n");
//     }

//     return 0;
// }

// ----------------- Windows 환경 -----------------

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>

// int main(){
//     int pos = 0, ch, k;
    
//     _putch('*');
//     while ((ch = _getch()) != 'q') {
//         if (ch == '1' && pos > 0){
//             pos--;
//         }
//         if (ch == '2' && pos < 81){
//             pos++;
//         }
//         system("cls");
//         for (k=0; k<pos; k++){
//             _putch(' ');
//         }
//         _putch('*');
//     }
//     return 0;
// }


// gpt 버전
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int getche(void) {
    struct termios oldt, newt;
    int ch;

    tcgetattr(STDIN_FILENO, &oldt);   // 현재 터미널 설정 저장
    newt = oldt;

    newt.c_lflag &= ~(ICANON);        // 버퍼 입력 끄기
    newt.c_lflag |= ECHO;             // 에코 켜기

    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);  // 원래 설정 복구

    return ch;
}

int main(){
    int pos = 0, ch, k;

    printf("*");

    while ((ch = getche()) != 'q') {

        if (ch == '1' && pos > 0){
            pos--;
        }

        if (ch == '2'){
            pos++;
        }

        system("clear");

        for (k = 0; k < pos; k++){
            printf(" ");
        }

        printf("*\n");
    }

    return 0;
}