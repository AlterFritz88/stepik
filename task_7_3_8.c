#include <stdio.h>

int main() {
    int n;
    int resieve = 0;
    scanf("%d", &n);
    while (n != -9999){
        if (resieve == 1){
            printf("%d ", n);
        }
        if (n == 2517){
            resieve = 1;
        }
        scanf("%d", &n);
    }
    return 0;
}
