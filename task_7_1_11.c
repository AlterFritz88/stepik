#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == 1){
        printf("1");
        return 0;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            printf("0");
            return 0;
        }
    }
    printf("1");

    return 0;
}