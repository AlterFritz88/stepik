#include <stdio.h>

int main() {
    int a, b, count = 1;
    scanf("%d %d", &a, &b);
    for (;a <= b; a++){
        for (int i = 0; i < count; i++){
            printf("%5d ", a);
        }
        count++;
    }
    return 0;
}