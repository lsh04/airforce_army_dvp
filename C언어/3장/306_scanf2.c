#include  <stdio.h>

int main(){
    int inum;
    float fnum;

    printf("정수와 실수를 입력: ");
    scanf("%d %f", &inum, &fnum);

    printf("결과: %d , %f\n", inum, fnum);

    return 0;
}