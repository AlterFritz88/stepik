#include <stdio.h>
#include <math.h>

int main() {
    double n;
    scanf("%lf", &n);
    double true_exp = exp(n);
    double e_6 = 1 + n/1 + n*n/2 + pow(n, 3)/(3*2) + pow(n, 4)/(4*3*2) + pow(n, 5)/(5*4*3*2);
    printf("%.6lf\n%.6lf", true_exp, e_6);
    return 0;
}