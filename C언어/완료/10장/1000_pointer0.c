#include <stdio.h>

int main() {

    int num = 5;
    int *p_num = &num;

    printf("%d %d \n", num, *p_num);
    printf("%p %p\n", &num, p_num);

    return 0;

}