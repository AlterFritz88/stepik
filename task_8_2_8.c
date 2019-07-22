#include <stdio.h>

int main() {
    int n, m, temp;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }

    for (int p = m - 1; p >= 0; p--){
        int sum = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (j == p){
                    sum += arr[i][j];
                }

            }
        }
        printf("%d ", sum);
    }

    return 0;
}

