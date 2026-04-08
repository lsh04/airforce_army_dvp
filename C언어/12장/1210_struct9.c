#include <stdio.h>
typedef struct human{
    char name[10];
    struct human *next;
} human;
int main(){
    struct human h1 = {"gildong"}, h2 = {"hyungwook"}, h3 = {"changsik"};
    struct human *sp;
    
    h1.next = &h2;
    h2.next = &h3;
    h3.next = NULL;
    
    sp = &h1;
    
    while (sp!=NULL){
        printf("%s\n",sp->name); // 포인터 sp가 가르키는 주소의 name 값을 출력
        sp = sp->next; // 포인터 sp를 다음 주소의 위치로 옮겨주는 코드 
        
    }
    
    return 0;
}