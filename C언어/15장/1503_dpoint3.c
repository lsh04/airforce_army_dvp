#include <stdio.h>

void print_string(char **dp){

    while (*dp){
        printf("%s\n",*dp++);
    }

}

int main() {
    char *str[3] = {"ring", "my", "bell"};

    print_string(str);
    return 0;
}