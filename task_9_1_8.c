#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 91 - n; i <= 90; i++){

        printf("%c", i);
    }
    return 0;
}


