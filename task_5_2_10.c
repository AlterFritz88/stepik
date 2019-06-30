#include <stdio.h>

int main() {
    int seconds;
    scanf("%d", &seconds);
    printf("%d",  seconds - (int)(seconds / (60.0*60)) * 60 * 60);
    return 0;
}
