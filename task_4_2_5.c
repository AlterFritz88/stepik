#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    double ans = fabs(b-a);
    printf("%.0lf", ans);
    return 0;
}