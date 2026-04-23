#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int com;

    srand((unsigned)time(NULL));

    com = rand();
    printf("%d\n",com);
    com = rand() % 10;
    printf("%d\n",com);

    return 0;
    
}