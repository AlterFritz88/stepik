#include <stdio.h>
#include <math.h>

int main() {
    int d, n;
    scanf("%d%n", &d, &n);
    int i = 0;
    while (i < n){
        i++;
        printf("%d", d % 10);
        d /= 10;
    }

    return 0;
}

