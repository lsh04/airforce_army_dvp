#include <stdio.h>

int main (){
    int num = 5, nnum = 9;
    int *const p_num = &num;

    *p_num = nnum; 
    printf("%d, %d, %d\n", num, nnum, *p_num);


    // 05행에서 const로 상수화함. 새로운 주솟값 p_num에 대입 X
    // p_num = &nnum;
    printf("%d, %d, %d\n", num,num, *p_num);

    return 0;
    
}