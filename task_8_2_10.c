#include <stdio.h>
#include <math.h>


int main() {
    int  m, temp, k;

    scanf("%d", &m);
    int arr[m][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &temp);
            arr[i][j] = temp;
        }
    }
    scanf("%d", &k);
    int n = k % m;
    int new_arr[m][m];

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            if (j < n){
                new_arr[i][j] =  arr[i][m - n + j];
            } else {
                new_arr[i][j] = arr[i][j - n];
            }

        }
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", new_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
