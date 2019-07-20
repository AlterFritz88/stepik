#include <stdio.h>

int main() {
    int n, sum = 0, temp;
    double med;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        sum += temp;
        array[i] = temp;
    }
    med = sum / (double)n;

    for (int i = 0; i < n; i++){
        if (array[i] > med){
            printf("%d ", array[i]);
        }
    }

    for (int i = 0; i < n; i++){
        if (array[i] <= med){
            printf("%d ", array[i]);
        }
    }

    return 0;
}

