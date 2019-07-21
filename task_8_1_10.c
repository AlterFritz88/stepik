#include <stdio.h>
#include <limits.h>

int main() {
    int n, temp, max_index, min_index;
    int max = INT_MIN;
    int min = INT_MIN;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        arr[i] = temp;
    }

    return 0;
}

