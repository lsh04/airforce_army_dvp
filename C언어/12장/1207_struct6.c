#include <stdio.h>
struct human {
    char name[10];
    int age;
    float grade;
};
int main(){
    struct human h1 = {"gildong", 22, 3.8f};
    struct human *sp;
    
    sp = &h1;
    printf("%s %d %.1f\n", (*sp).name,(*sp).age,(*sp).grade);
    printf("%s %d %.1f\n", sp->name, sp->age, sp->grade);
    
    return 0;
}