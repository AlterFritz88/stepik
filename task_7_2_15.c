#include <stdio.h>

int main() {
    int a, b, res = 1;
    scanf("%d %d", &a, &b);
    while (!(res % a == 0 && res % b == 0)){
        res++;
    }
    printf("%d", res);
    return 0;
}

