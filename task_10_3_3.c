#include <stdio.h>

void sum_digits(int * x){
    int sum = *x % 10;
    while (*x > 1){
        *x  = *x / 10;
        sum += *x % 10;
    }
    *x = sum;
}

int main(){
    int a = 12938;
    sum_digits(&a);
    printf("%d", a);
    return 0;
}
