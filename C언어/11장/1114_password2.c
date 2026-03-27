#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char pwd[20];
    int low = 0, upp=0, dig=0, ptc=0, k;

    printf("사용할 비밀번호 입력: ");
    scanf("%s", pwd);

    if(strlen(pwd) < 8){
        printf("비밀번호가 짧아요");
        return 0;
    }

    for (k=0; pwd[k] != 0; k++){ 
        if (islower(pwd[k])) { 
            low = 1; // 소문자 low = 1
        } else if (isupper(pwd[k])){
            upp = 1; // 대문자 upp = 1
        } else if (isdigit(pwd[k])){
            dig = 1; // 숫자 dig = 1
        } else if (ispunct(pwd[k])){
            ptc = 1; // 특수문자 low = 1
        }
        
    }
    if ((low + upp + dig + ptc) >= 2){ // 종류가 3개 이상일때 사용 가능한 비번
            printf("사용 가능한 비밀번호!\n");
            
        }else {
            printf("불가능한 비밀번호!\n");
        }
    return 0;
}
