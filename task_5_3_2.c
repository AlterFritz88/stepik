#include <stdio.h>

int main() {
    int foot, inch;
    scanf("%d %d", &foot, &inch);
    printf("%d'%d\" = %.2lfm.", foot, inch, ((((double)foot*12.0) + inch) * 25.4) / 1000.0);
    return 0;
}