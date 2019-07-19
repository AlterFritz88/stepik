#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d ", 1);
    for (int i = 2; i*i < n; i++){
        printf("%d ", i*i);
    }
    return 0;
}
