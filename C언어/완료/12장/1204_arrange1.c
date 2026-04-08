#include <stdio.h>

struct date {
    int year, mon, day;
};

typedef struct human{
    char name[10];
    struct date birth;

} human;

int main(){
    human h1, h2;
    int jud = 0; // 누가 형인지 판단, jud가 0일 경우 친구

    printf("사람1 - 이름, 태어난 연도, 월 입력: \n");
    scanf("%s %d %d", h1.name, &h1.birth.year, &h1.birth.mon);
    printf("사람2 - 이름, 태어난 연도, 월 입력: \n");
    scanf("%s %d %d",h2.name, &h2.birth.year, &h2.birth.mon);

    //h1, h2 태어난 연도 비교

    if(h1.birth.year < h2.birth.year) { jud = 1;} 
    else if (h1.birth.year > h2.birth.year) { jud = 2;}

    // 태어난 연도가 같을 때 월 비교
    else if (h1.birth.year == h2.birth.year && h1.birth.mon < h2.birth.mon){ jud = 1;} 
    else if (h1.birth.year == h2.birth.year && h1.birth.mon > h2.birth.mon){ jud = 2;}

    if (jud == 1){
        printf("%s 형님\n", h1.name);
    }
    else if (jud == 2){
        printf("%s 형님\n", h2.name);
    } 
    else {
        printf("둘은 친구\n");
    }
    return 0;
}