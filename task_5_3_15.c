#include <stdio.h>
#include <math.h>

int main() {
    int k;
    scanf("%d", &k);
    double n_0 = 75e9;
    double lambda = log(2) / 5570;
    printf("%.2lf", (n_0 * exp(-lambda*k)) / 1e9);
    return 0;
}

