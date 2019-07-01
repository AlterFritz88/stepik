#include <stdio.h>
#include <math.h>

int main() {
    int d4, d3, d2, d1;
    scanf("%1d%1d%1d%1d", &d4, &d3, &d2, &d1);
    printf("%.0lf", d4*pow(2., 3.) + d3*pow(2., 2.) + d2*pow(2., 1.) + d1*pow(2., 0.));
    return 0;
}

