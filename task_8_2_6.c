#include <stdio.h>

int main() {
    int n, temp, sum_1 = 1, sum_2 = 1;
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
            if (i == j){
                sum_1 *= arr[i][j];
            }
            if (i == (n - j - 1)){
                sum_2 *= arr[i][j];
            }
        }
    }


    if (sum_2 > sum_1){
        printf("%d %d", sum_2, sum_1);
    } else {
        printf("%d %d", sum_1, sum_2);
    }

    return 0;
}

