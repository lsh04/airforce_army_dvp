#include <stdio.h>

void chicken(int num){
    int order;

    for (order=1; order <= num; order++){
        printf("%d번째 자단 통닭\n", order);
    }
}

int main() {
    int order = 3;

    chicken(order);


    return 0;
}