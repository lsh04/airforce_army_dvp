#include <stdio.h>

double print_score(int *score, int size){
    int sum = 0, k;

    for (k=0; k < size; k++){
        printf("%d = %d점, ",k, score[k]);
        sum = sum + score[k];
    }
    return (sum / size);
}

int main() {
    int score[5] = {75, 84, 13, 96, 46};
    double ave;

    ave = print_score(score, 5);
    printf("\n평균= %.1lf", ave);
    return 0;
}