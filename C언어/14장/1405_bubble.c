#include <stdio.h>

#define SWAP(a,b) {int t; t=a; a=b; b=t;} // 두 수를 바꾸는 함수 매크로 정의

void bubble_sort(int *pd, int size){    // 배열을 포인터로 받음
    int j, k;

    for (k=0; k<size; k++){ // 배열의 크기 만큼 반복
        for(j=1; j<size; j++){
            if(pd[j-1]>pd[j]){  // 두 수 비교
                SWAP(pd[j-1],pd[j]);
            }
        }
    }
}

int main(){
    int data[9] = {2,7,3,5,9,8,6,1,4}, k;

    bubble_sort(data,9);
    for (k=0; k<9; k++){
        printf("%d", data[k]);  // 배열값 출력
    }
    return 0;
}