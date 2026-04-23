#include <stdio.h>

int main(){
    int person, amount, pack, bottle;

    printf("전체 인원과 1인당 생수 수 입력: ");
    scanf("%d %d", &person, &amount);

    bottle = person * amount % 15; // 나머지값 구함
    pack = (person * amount - bottle) / 15; // 몫을 구함

    printf("15팩 구매비용 %d원\n", pack * 10000);
    printf("낱개 구매비용 %d원\n", bottle * 900);
    printf("전체 구매비용 %d원\n", pack * 10000 + bottle * 900);

    return 0;
}