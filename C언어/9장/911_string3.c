#include <stdio.h>

double print_string(char str[]) {
    int k;

    for (k=0; str[k] !=0; k++){
        printf("%c\n", str[k]);

    }
    printf("\n");
    printf("%s", str);
}

int main() {
    char str[10] = "TED CHANG";

    print_string(str);

    return 0;
}