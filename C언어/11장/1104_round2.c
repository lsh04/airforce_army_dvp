// windows용 코드

// #include <stdio.h>
// #include <stdlib.h>
// #include <windows.h>

// int main() {
//     char str[40] = "";
//     int len =0,k,m;
    
//     printf("회전할 문자열 입력: ");
//     gets_s(str,40);
//     while (str[len] != 0){
//         len ++;
//     }
//     for(k=0; k<300; k++){
//         system("cls");
//         for(m=0; m<len; m++){
//             putchar(str[(m+k)%len]);
//         }
//         Sleep(200);
//     }
//     return 0;
// }

// Linux용 코드

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    char str[40] = "";
    int len = 0, k, m;

    printf("회전할 문자열 입력: ");
    fgets(str, 40, stdin);

    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    for (k = 0; k < 300; k++) {
        system("clear");

        for (m = 0; m < len; m++) {
            putchar(str[(m + k) % len]);
        }

        printf("\n");
        usleep(200000); // 0.2초
    }

    return 0;
}