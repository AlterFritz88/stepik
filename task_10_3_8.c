#include <stdio.h>

int gcd(int x, int y){
    int min;
    if (x < y) min = x; else min = y;
    for (int i = min - 1; i > 0; i--){
        if (x % i == 0 && y % i == 0){
            return i;
        }
    }
}


void reduce_fraction(int * a, int * b){
    int del = gcd(*a, *b);
    *a = *a / del;
    *b = *b / del;
}

int main(){
    int  a = 14, b = 49;
    reduce_fraction(&a, &b);
    printf("%d %d", a, b);
    return 0;
}

