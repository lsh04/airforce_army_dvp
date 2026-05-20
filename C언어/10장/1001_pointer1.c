#include <stdio.h>

int main(){
    int num = 5, copy;
    int *p_num;

    copy = num;
    p_num = &num;

    printf("num = %d, &num = %p\n", num, &num);
    printf("p_num = %p, *p_num = %d\n", p_num, *p_num);

    return 0;
}