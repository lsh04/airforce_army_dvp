//매개변수로 구조체 포인터 사용(참조에 의한 호출)

#include <stdio.h>
struct human{
    char name[10];
    float grade;
};
void attack(struct human *f1, struct human *f2){
    if(f1->grade > f1->grade){
        printf("출동 %s", f1->name);
    } else{
        printf("출동 %s", f2->name);
    }
    
}int main(){
    struct human h1 = {"gildong", 3.8f}, h2 = {"hyungwook",4.2f};
    
    attack(&h1, &h2);
    
    return 0;
}