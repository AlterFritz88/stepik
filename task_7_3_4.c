#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n == -9999){
        printf("NO");
        return 0;
    }
    while (n != -9999){
        if (n <= 0){
            printf("NO");
            return 0;
        }
        scanf("%d", &n);
    }
    printf("YES");
    return 0;
}

