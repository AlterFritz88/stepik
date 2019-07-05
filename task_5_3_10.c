#include <stdio.h>

int main() {
    int n, k , x;
    scanf("%d %d %d", &n, &k, &x);
    printf("%d", (k+x)%n);
    return 0;
}

