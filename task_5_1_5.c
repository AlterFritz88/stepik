#include <stdio.h>

int main() {
    double pi = 3.14159265358979323846;
    int r1, r2;
    scanf("%d %d", &r1, &r2);
    double s1 = (pi * r1 * r1) * 100;
    double s2 = (pi * r2 * r2) * 100;
    printf("%d %.2lf", r2-r1,  s2 - s1);
    return 0;
}