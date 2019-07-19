#include <stdio.h>

int main() {
    int n;
    int count = 1;
    scanf("%d", &n);
    while ((n / 10.) > 1){
        count += 1;
        n /= 10.;
    }
    printf("%d", count);
    return 0;
}
