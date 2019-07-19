#include <stdio.h>

int main() {
    int n;
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
            printf("NO");
            return 0;
        }
        prev = next;
    }
    printf("YES");
    return 0;
}

