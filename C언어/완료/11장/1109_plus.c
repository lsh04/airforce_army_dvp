#include <stdio.h>
#include <stdlib.h>

int main() {
    char str1[10], str2[10];
    double sum = 0;

    printf("더할 숫자 2개 입력:" );
    scanf("%s%s", str1,str2);

    sum = sum + atoi(str1);
    sum = sum + atof(str2);
    printf("%s + %s = %lf\n", str1, str2, sum);

    return 0;

}