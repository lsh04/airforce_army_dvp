#include <stdio.h>

typedef char *string;

void str_make(string *p){
    *p = "ring my bell";
}

int main(){
    string words = NULL;

    str_make(&words);
    printf("%s\n",words);
    return 0;
}