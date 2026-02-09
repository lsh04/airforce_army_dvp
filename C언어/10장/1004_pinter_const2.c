#include <stdio.h>

int main(){
    int num = 5, nnum =9;
    const int *p_num = &num;

    // *p_num = nnum; 포인터p_num이 가르키는 num의 값을 변경 할 수 없음
    // printf("%d, %d, %d\n", num, nnum, *p_num);

    p_num = &nnum;
    printf("%d, %d, %d\n", num, nnum, *p_num);

    return 0;

    
}