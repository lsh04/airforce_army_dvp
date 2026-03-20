#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "";
    char str2[10] = "Love You";
    char str3[10] = "So Much!!";

    strcpy(str1, str2); // 문자열 str2 -> str1로 복사
    printf("%s: %zu\n", str1, strlen(str1));
    strcat(str1, " "); // 문자열 str1 뒤에 공백 문자 붙임
    printf("%s: %zu\n", str1, strlen(str1));
    strncat(str1, str3, 7); // 문자열 str1 뒤에 7글자 붙임
    printf("%s: %zu\n", str1, strlen(str1));
    return 0;
}