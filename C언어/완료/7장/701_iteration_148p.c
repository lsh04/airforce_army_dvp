// 두 수를 동시에 증가 시키기

#include <stdio.h>

int main(){
    int k, m;

// 변수 두개 초기화 시에는 ,(쉼표) 넣기
    for(k=1,m=2; k<6; k++,m++){
        printf("%d * %d = %d\n", k,m,k*m);
    }

    // for(int k=1, m=2; k<6; k++, m++){~ ~ ~ } 초기식에서 변수 선언 가능
    
    return 0;
}