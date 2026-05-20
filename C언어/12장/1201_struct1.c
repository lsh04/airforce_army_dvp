#include <stdio.h>
#include <string.h>

struct human{ // 구조체 정의
    char name[20]; // 문자형 배열 멤버
    int age; // 정수형 멤버
    float grade; // 실수형 멤버
}; // 구조체 정의 긑에 세미콜론 사용

int main(){
    struct human h1; // human 구조체 변수 h1 선언

    strcpy(h1.name,"gildong"); // h1의 name 멤버에 문자열 gildong 복사
    h1.age = 22; // h1의 age멤버에 정수 22 대입
    h1.grade = 3.8f; // h1의 grade 멤버에 실수 3.8 대입

    printf("name = %s\n", h1.name);
    printf("age = %d\n", h1.age);
    printf("grade = %.1f\n", h1.grade);

    return 0;

}