#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (;a <= b; a++) {
        for (int i = 0; i < a; i++) {
            printf("%4d ", a);
        }
    }
    return 0;
}

