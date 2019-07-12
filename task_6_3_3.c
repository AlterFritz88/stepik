#include <stdio.h>

int main() {
    int a, b, c, count = 0;
    scanf("%d %d %d", &a, &b, &c);

    if (a > 0) count ++;
    if (b > 0) count ++;
    if (c > 0) count ++;

    printf("%d", count);
    return 0;
}

