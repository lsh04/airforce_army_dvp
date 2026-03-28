#include <stdio.h>

int main(){
    char str[5] = "ABCD", *p;

    printf("str addr = %p, str[0] addr = %p\n", str, &str[0]);
    p = str;
    printf("p = %c, str = %c\n", *p, *str);
    printf("p = %c, str = %c\n", p[1],str[1]);

    return 0;
    
}