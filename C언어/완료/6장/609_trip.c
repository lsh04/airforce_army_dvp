#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int trip;

    srand((unsigned)time(NULL));
    trip = rand()%4;

    switch(trip) {
        case 0:
            printf("제주도로 출발\n");
            break;
        case 1:
            printf("사이판으로 출발\n");
            break;
        default:
            printf("하와이로 출발\n");
    }
    return 0;
}