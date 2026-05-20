#include <stdio.h>

int main(){
    int num1 =1, num2 =2;

    printf("%d\n", num1 == 0 && num2 == 0);
    printf("%d\n", num1 >0 || num2 >0);
    printf("%d\n", !(num1>0));

    return 0;
}