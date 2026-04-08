#include <stdio.h>
struct human {
    char name[10];
    float grade;
};
struct human attack(struct human f1, struct human f2){
    if(f1.grade > f2.grade){
        return f1;
    } else{
        return f2;
    }
}int main(){
    struct human h1 = {"gildong", 3.8f}, h2 = {"hyungwook", 4.2f}, att;
    
    att = attack(h1,h2);
    printf("출동 %s\n", att.name);
    return 0;
}