#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    int d0 = K/1000;
    int d1 = K/100%10;
    int d2 = K%100/10;
    int d3 = K%10;

    double firts = (double)d0*d2;
    double second = (double)d1*d3;

    printf("%.2lf", (firts / second));
    return 0;
}