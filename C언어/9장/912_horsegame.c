#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int horse[12] = {0};
    int go = 1, win, k;

    srand((unsigned)time(NULL));
    while (go) {
        system("cls");
        for (k=0; k<12; k++){
            horse[k] = horse[k] + rand() %10;
            printf("%d번 말 %d미터 전진\n\n", k, horse[k]);
            if (horse[k] > 100){
                win = k;
                go = 0;
            }
        }
        system("timeout 1> NULL");
    }
    printf("\n< %d번 말 승리 >\n", win);
    return 0;

}