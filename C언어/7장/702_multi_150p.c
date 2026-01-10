#include <stdio.h>

int main(){
    int dan, num;

    printf("<구구단>");
    for (dan=2; dan<=9; dan++){
        printf("\n%d단: ",dan);
        for(num=1; num<=9; num++){
            printf("%d x %d = %d ", dan, num, dan*num);
        }
    }
    return 0;
}