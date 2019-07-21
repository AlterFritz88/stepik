#include <stdio.h>
#include <limits.h>

int main() {
    int n, temp, max_index, min_index;
    int max = INT_MIN;
    int min = INT_MAX;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        arr[i] = temp;
        if (temp > max){
            max = temp;
            max_index = i;
        }
        if (temp < min){
            min = temp;
            min_index = i;
        }
    }

    for (int i = 0; i < n; i++){
        if (i == min_index){
            printf("%d ", max);
            continue;
        }
        if (i == max_index){
            printf("%d ", min);
            continue;
        }
        printf("%d ", arr[i]);
    }

    return 0;
}

