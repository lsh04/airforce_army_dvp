#include <stdio.h>
typedef struct human{
    char name[10];
    int age;
    float grade;
} human;
void print_human(human *hp, int j){ // (구조체 포인터, 구조체 배열 크기)
    int k;
    
    for(k=0; k<j; k++){
        printf("%s %d %.1f\n", hp[k].name, hp[k].age, hp[k].grade);
    }
}int main(){
    human ho[4] = {{"gildong",22,3.8f},{"hyungwook",28,4.2f},{"changsik",21,2.1f},{"hosik",29,3.1f}};
    
    print_human(ho,4); // (시작 주소, 배열 크기)
    
    return 0;
}