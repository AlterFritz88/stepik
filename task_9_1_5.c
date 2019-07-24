#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);
    printf("%c %c", letter - 1, letter + 1);
    return 0;
}
