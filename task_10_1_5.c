#include <stdio.h>
int factorial(int k);
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}
int factorial(int k){
    int fac = 1;
    for (int i = 1; i <= k; i++){
        fac *= i;
    }
    return fac;
}