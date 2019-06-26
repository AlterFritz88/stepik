#include <stdio.h>

int main() {
    int r, h;
    scanf("%d %d", &r, &h);
    double pi = 3.14159265358979323846;
    printf("%.2lf %.2lf", h*pi*r*r, h*pi*r*r/3);
    return 0;
}
