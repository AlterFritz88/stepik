#include <stdio.h>

int main() {
    int K;
    scanf("%d", &K);
    int d1 = K/100;
    int d2 = K%100/10;
    int d3 = K%10;
    printf("%d", d3*100 + d2*10 + d1);
    return 0;
}