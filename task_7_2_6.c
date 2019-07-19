#include <stdio.h>
#include <limits.h>

int main() {
    int min = INT_MAX;
    int max = INT_MIN;
    int n;
    scanf("%d", &n);
    while (n != 0){
        if (n > max){
            max = n;
        }
        if (n < min){
            min = n;
        }
        scanf("%d", &n);
    }
    printf("%d %d", max, min);

    return 0;
}

