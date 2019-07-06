#include <stdio.h>

int main() {
    int k, d1, d2, d3, d4;
    scanf("%d %d %d %d %d", &k, &d1, &d2, &d3, &d4);
    printf("%d ", (k+d1)%26);
    printf("%d ", (k+d2)%26);
    printf("%d ", (k+d3)%26);
    printf("%d ", (k+d4)%26);
    return 0;
}

