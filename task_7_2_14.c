#include <stdio.h>

int main(void) {
    int a, k;
    scanf("%d %d", &a, &k);
    int res = 1;
    int stepen = k;
    while(k > 0){
        if (k%2 == 1){
            res = res * a;
        }
        a *= a;
        k = (k / 2);
    }
    printf("%d\n", res);
    return 0;
}

