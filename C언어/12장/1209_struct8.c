#include <stdio.h>
typedef struct human {
    char name[10];
    struct human *next;
} human;
int main(){
    human h1 = {"gildong"}, h2 ={"hyungwook"}, h3 = {"changsik"};
    human *sp;
    
    h1.next = &h2;
    h2.next = &h3;
    h3.next = NULL;
    
    sp = &h1;
    printf("%s\n", sp->name);
    sp = sp->next;
    printf("%s\n", sp->name);
    sp = sp->next;
    printf("%s\n", sp->name);
    return 0;
}