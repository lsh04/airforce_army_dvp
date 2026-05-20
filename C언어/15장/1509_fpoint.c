#include <stdio.h>

void my_fp(int a) {
    printf("%d\n",a);
}

int main(){
    void (*fp)(int);
    fp = my_fp;
    fp(10);
    return 0;
}