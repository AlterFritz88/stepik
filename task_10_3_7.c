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


int main(){
    int  a = 14, b = 14;
    int g = gcd(a, b);
    printf("%d", g);
    return 0;
}