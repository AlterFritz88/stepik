#include <stdio.h>
#include <math.h>

int main() {
    double PI = 3.141593;
    double a, b, g;
    scanf("%lf %lf %lf", &a, &b, &g);
    double rad = (g / 180) * PI;
    printf("%.2lf", 0.5 * a * b * sin(rad));
    return 0;
}