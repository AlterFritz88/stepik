#include <stdio.h>

int main() {
    int d1, d2, d3, d4;
    scanf("%1d%1d%1d%1d", &d1, &d2, &d3, &d4);
    printf("%d%d%d%d", (d3+3)%10, (d4+3)%10, (d1+3)%10, (d2+3)%10);
    return 0;
}

