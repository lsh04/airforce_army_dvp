#include <stdio.h>

void ret_inch(double len) {
    printf("%.2lf cm = %.2lf inch\n", len, len/2.54);
}

int main() {
    double cm;

    printf("변환할 cm값: ");
    scanf("%lf", &cm);

    ret_inch(cm);

    return 0;
}