#include <stdio.h>

int main() {
    int n, counter = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
            counter++;
        }
    }
    printf("\n%d", counter);
    return 0;
}
