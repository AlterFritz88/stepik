#include <stdio.h>

int main() {
    int n, sum = 0, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%.2lf", sum / (double)n);
    return 0;
}

