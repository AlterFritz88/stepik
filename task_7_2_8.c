#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    int i = 1;
    if (n == 1){
        printf("YES");
        return 0;
    }
    while (pow(2, i) <= n){
        if (pow(2, i) == n){
            printf("YES");
            return 0;
        }
        i++;
    }
    printf("NO");
    return 0;
}
