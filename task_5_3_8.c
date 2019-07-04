#include <stdio.h>

int main() {
    int modul, a, b;
    scanf("%d %d %d", &modul, &a, &b);
    printf("%d %d", a % modul, b % modul);
    return 0;
}
