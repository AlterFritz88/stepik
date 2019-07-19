#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prev;
    int next;
    scanf("%d", &prev);
    printf("%d ", prev);
    for (int i = 1; i < n; i++){
        scanf("%d", &next);
        if (next != prev){
            printf("%d ", next);
        }
        prev = next;

    }
    return 0;
}

