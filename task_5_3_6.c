#include <stdio.h>
#include <math.h>

int main() {
    int d4, d3, d2, d1, power;
    scanf("%d %1d%1d%1d%1d", &power, &d4, &d3, &d2, &d1);
    printf("%.0lf", d4*pow(power, 3.) + d3*pow(power, 2.) + d2*pow(power, 1.) + d1*pow(power, 0.));
    return 0;
}