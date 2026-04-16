#include <stdio.h>

void minmize(){
    printf("창 크기 최소화\n");
}

void re_size(){
    printf("창 크기를 변경함\n");
}

void abort(){
    printf("프로그램을 종료함\n");
}

void my_re_size(){
    printf("크기를 변경할 수 없음\n");
}

// void my_re_minmize(){
//     printf("창 크기 최소화 할 수 없음\n");
// }

// void my_re_abort(){
//     printf("프로그램을 이미 종료함\n");
// }


int main(){
    void (*button[3])() = {minmize,re_size, abort};
    int event;

    printf("이벤트 입력(최소화=0, 크기 변경=1, 프로그램 종료=2: ");
    scanf("%d", &event);
    button[event]();


    button[1] = my_re_size;

    
    printf("이벤트 입력(최소화=0, 크기 변경=1, 프로그램 종료=2: ");
    scanf("%d", &event);
    button[event]();
    return 0;
}