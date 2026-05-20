#include <stdio.h>
#include <string.h>

struct human {
    char name[10];
    int age;
    float grade;
};

int main(){
    struct human h1 = {"gildong", 22, 3.8f}, h2 = {"hyungwook"}, h3 = {""};

    printf("h1: %s, %d, %.1f\n", h1.name, h1.age, h1.grade);
    printf("h2: %s, %d, %.1f\n", h2.name, h2.age, h2.grade);
    printf("h3: %s, %d, %.1f\n", h3.name, h3.age, h3.grade);

    return 0;
}