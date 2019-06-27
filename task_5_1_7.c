#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &M, &N);

    double result = M / (double)N;
    printf("%d %d", (int)result%10, (int)(result*10)%10);

    return 0;
}
