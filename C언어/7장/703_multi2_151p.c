#include <stdio.h>
#include <stdlib.h>

int main(){

    int dan, num;

    printf("<구구단>");
    system("cls");
    for(dan=2; dan<=9; dan++){
        printf("\n%d단: ",dan);
        for(num=1; num<=9; num++){
            printf("%d x %d = %d ", dan, num, dan*num);
        system("timeout 2 > NULL");
        }
    }
    return 0;
}