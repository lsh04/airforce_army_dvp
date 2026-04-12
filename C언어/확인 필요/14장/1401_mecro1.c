#include <stdio.h>

#define MUL(a, b) (a) * (b)

int main(){
    printf("5와 7 곱하기 결과 %d\n", MUL(5,7));
    printf("2.7과 4.2 곱하기 결과 %f\n", MUL(2.7f,4.2f));
    printf("2+3과 3+4 곱하기 %d\n",MUL(2+3,3+4));

    return 0;
}