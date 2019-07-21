#include <stdio.h>

int main() {
    int n, m, temp;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}



