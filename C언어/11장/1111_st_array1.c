#include<stdio.h>

int main(){
    char str[3][5] = {"ring","my","bell"};
    int k;

    for (k=0; k<3; k++){
        printf("%s\n",str[k]);

    }
    return 0;
}