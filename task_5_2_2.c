#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    n = (int)fabs(n);
    printf("%d", ((n+1)%2) - (n%2));
    return 0;
}

