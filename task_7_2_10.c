#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (pow(2, i) <= n){
        printf("%d ", i);
        i++;
    }

    return 0;
}
