#include <stdio.h>
#include <string.h>

int main(){
    char str1[20] = "Love You So Much";
    char str2[20] = "Love you",*p;
    int st;

    st = strcmp(str1, str2); // 문자열 비교: 같다 = 0, 앞 -> 음수 , 뒤 -> 양수 / 아스키 코드 기준으로 앞뒤 구분
    printf("str1 and str2 비교: %d\n",st);
    st = strncmp(str1,str2,5);
    printf("앞에서 5글자 비교: %d\n", st);
    
    p = strchr(str1,'v');
    if (p != NULL){
        printf("%s\n", p);
    } else {
        printf("찾는 문자가 없네요!\n");

    }
    p = strstr(str1, "so");
    if (p != NULL){
        printf("%s\n", p);
    } else {
        printf("찾는 문자가 없네요!\n");

    }
    return 0;

}