#include <stdio.h>

int main() {
    int a1, a2, a3, a4;
    scanf("%d %d %d %d", &a1, &a2, &a3, &a4);
    if (a1 == 1 && a2 == 0 && a3 == 2 && a4 == 4){
        printf("open");
    } else {
        printf("close");
    }
    return 0;
}

