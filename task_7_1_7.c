#include <stdio.h>

int fib(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main() {
    int n, n1 = 0, n2 = 1,  n3;
    scanf("%d", &n);
    if (n == 0){
        printf("0");
    }
    else if (n == 1){
        printf("1");
    } else {
        for (int i = 2; i <= n; ++i){
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
        }
        printf("%d", n3);

    }


    return 0;
}

