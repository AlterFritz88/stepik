#include <stdio.h>

int main() {
    int n, yes = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n; i++) {
        if (array[i] < array[n-1]){
            printf("%d ", array[i]);
            yes = 1;
        }

    }
    if (yes == 0){
        printf("0");
    }

    return 0;
}
