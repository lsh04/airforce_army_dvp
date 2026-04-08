#include <stdio.h>
struct date{
    int year, mon, day;
};
struct human{
    char name[10];
    struct date *bt;
};
int main(){
    struct human h1 = {"gildong"};
    struct date d1 = {1989,12,12};
    
    h1.bt = &d1;
    printf("이름: %s\n", h1.name);
    printf("%d년 %d월 %d일", h1.bt->year,h1.bt->mon,h1.bt->day);
    
    return 0;
}
