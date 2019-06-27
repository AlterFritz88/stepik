#include <stdio.h>

int main() {
    int sec;
    scanf("%d", &sec);
    printf("%d %d", (sec/3600)%60, (sec/60)%60);
    return 0;
}