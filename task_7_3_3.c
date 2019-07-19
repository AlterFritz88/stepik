#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (i <= n){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        i++;
        printf("\n");

    }
    return 0;
}

