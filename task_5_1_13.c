#include <stdio.h>

int main() {
    double e_4 = 1 + 1./1 + 1./2 + 1./(3*2);
    double e_5 = 1 + 1./1 + 1./2 + 1./(3*2) + 1./(4*3*2);
    double e_6 = 1 + 1./1 + 1./2 + 1./(3*2) + 1./(4*3*2) + 1./(5*4*3*2);
    printf("%.5lf\n", e_4);
    printf("%.5lf\n", e_5);
    printf("%.5lf\n", e_6);

    return 0;
}
