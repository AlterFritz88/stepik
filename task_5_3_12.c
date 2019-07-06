#include <stdio.h>

int main() {
    int d1, d2, d3, d4;
    scanf("%1d%1d%1d%1d", &d1, &d2, &d3, &d4);
    printf("%d%d%d%d", (d3+7)%10, (d4+7)%10, (d1+7)%10, (d2+7)%10);
    return 0;
}

