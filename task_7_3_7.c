#include <stdio.h>

int main() {
    int n, count = 2;
    scanf("%d", &n);
    int prev;
    int next;
    scanf("%d", &prev);
    while (1) {
        scanf("%d", &next);
        if (next == -9999) {
            break;
        }

        if (next <= prev) {
            printf("%d", count+1);
            return 0;
        }
        prev = next;
        count++;
    }
    printf("0");
    return 0;
}

