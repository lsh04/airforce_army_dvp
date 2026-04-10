#include <stdio.h>

#define SPRINT(s) printf("%s\n", s)
#define NPRINT(s) printf("%s\n", #s)

int main(){
    SPRINT("I LOVE YOU");
    NPRINT(I LOVE YOU);

    return 0;
}