#include <stdio.h>

// 받는 쪽 함수에서 배열의 값을 변경하지 못하도록 하는 코드
// void func_array(const int arr[], int size){ ~~~ }

// 함수를 호추하는 쪽 코드
// int arr[3];
// func_array(arr,3);

double print_score(int score[], int size){ // 크기가 없는 배열 score[]와 size로 받음

    int sum = 0, k;

    for (k=0; k < size; k++){
        printf("%d = %d점, ", k, score[k]);
        sum = sum + score[k];
    }
    return (sum/size); // 평균값 반환 
}

int main(){
    int score[5] = {75, 84, 13, 96, 46};
    double ave;

    ave = print_score(score, 5);
    printf("\n 평균 = %.1lf", ave);
    return 0;
}