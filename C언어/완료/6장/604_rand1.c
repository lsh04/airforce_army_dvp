#include <stdio.h>
#include <stdlib.h>

int main(){
    int com;

    com = rand();
    printf("%d\n",com);
    com = rand() % 10;
    printf("%d\n", com);
    com = rand() % 10 + 1;
    printf("%d\n", com);

    return 0;
}