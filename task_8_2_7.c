#include <stdio.h>

int main() {
    int n, sum_1 = 0, sum_2 = 0, temp;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i < j){
                sum_1 += arr[i][j];
            }
            if (i > (n - j - 1)){
                sum_2 += arr[i][j];
            }
        }
    }

    if (sum_2 < sum_1){
        printf("%d %d", sum_2, sum_1);
    } else {
        printf("%d %d", sum_1, sum_2);
    }
    return 0;
}

