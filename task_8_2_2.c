#include <stdio.h>

int main() {
    int n, m, temp;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &temp);
            printf("%d ", temp);
        }
        printf("\n");
    }
    return 0;
}

