#include <stdio.h>

void minmax(int * x, int * y){
    if (*x > *y) {
        int min = *y;
        int max = *x;
        *y = max;
        *x = min;
    } else {
        int max = *y;
        int min = *x;
        *y = max;
        *x = min;
    }
}

int main(){
    int a = 4435, b = 21;
    minmax(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
