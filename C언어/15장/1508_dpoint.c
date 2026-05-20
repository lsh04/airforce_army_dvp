#include <stdio.h>

int main() {
    int num = 7;
    char ch = 'A';
    void *vp;

    vp = &num;
    printf("%d\n", *(int*)vp);
    vp = &ch;
    printf("%c\n",*(char *)vp);

    return 0;
}