#include <stdio.h>

int main() {
    int a1, a2, a3;
    scanf("%d %d %d", &a1, &a2, &a3);
    if (a1 * a2 * a3 == 64 && a1 + a2 + a3 == 14){
        printf("open");
    } else {
        printf("close");
    }
    return 0;
}


