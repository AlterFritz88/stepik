#include <stdio.h>

int main() {
    int n, sum = 0;
    int null = 0;
    scanf("%d", &n);
    while (n != -9999){
        if (n == 0 && null == 1){
            break;
        }
        if (n == 0){
            null = 1;
        }


        if (null == 1){
            sum += n;
        }

        scanf("%d", &n);
    }
    printf("%d ", sum);
    return 0;
}

