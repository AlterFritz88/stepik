#include <stdio.h>

int main() {
    int fahr;
    scanf("%d", &fahr);
    printf("%.2lf", ((fahr - 32) * 5) / 9.0);
    return 0;
}