#include <stdio.h>

int main() {
    int a, ans;
    scanf("%d", &a);
    ans = a/100 + a%100/10 + a%10;
    printf("%d", ans);
    return 0;
}