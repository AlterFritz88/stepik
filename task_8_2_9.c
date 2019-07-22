#include <stdio.h>
#include <limits.h>

int main() {
    int n, m, temp;
    int max = INT_MIN;
    int min = INT_MAX;
    int index_max, index_min;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }

    for (int p = 0; p < m; p++){
        int sum = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                if (j == p){
                    sum += arr[i][j];
                }
            }
        }
        if (sum > max){
            max = sum;
            index_max = p;
        }
        if (sum < min){
            min = sum;
            index_min = p;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j == index_max){
                printf("%d ", arr[i][index_min]);
            } else if (j == index_min){
                printf("%d ", arr[i][index_max]);
            } else printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

