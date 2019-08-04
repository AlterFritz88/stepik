#include <stdio.h>

int is_prime(int k){
    printf("factors:\n");
    if (k == 1 || k == 2) return 1;
    for(int i = 2; i<k; i++) {
        if (k % i == 0)
            return 0;
    }
    return 1;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", is_prime(n));

    return 0;
}


