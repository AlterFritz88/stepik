#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n != -9999){
        printf("%d ", n);
        scanf("%d", &n);
    }
    printf("%d ", n);
    return 0;
}

