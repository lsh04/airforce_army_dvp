#include <stdio.h>

struct human{
    char name[10];
    int age;
    float grade;
} human;

int main(){
    struct human ho[3] = {{"gildong",22,3.8f},{"hyungwook",28,4.2f},{"changsik",21,2.1f}};

    int k;

    for (k=0; k<3; k++){
        printf("%d: %s %d %.1f\n", k, ho[k].name,ho[k].age,ho[k].grade);
    }
    return 0;
}