#include <stdio.h>

typedef struct human {
    char name[10];
    int age;
    float grade;
} human; // human 구조체의 별명(구조체 이름과 동일)

int main(){
    human h1, h2;

    printf("name age grade 순서대로 입력: ");
    scanf("%s %d %f", h1.name, &h1.age, &h1.grade);

    h2 = h1;

    printf("h1: %s, %d, %.1f\n", h1.name, h1.age, h1.grade);
    printf("h2: %s, %d, %.1f\n", h2.name, h2.age, h2.grade);

    return 0;

}