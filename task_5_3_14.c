#include <stdio.h>
#include <math.h>

int main() {
    int h;
    double ro = 1.29, z = 1.25e-4;
    scanf("%d", &h);
    printf("%.2lf", ro*exp(-h*z));
    return 0;
}
