#include <stdio.h>

int main() {
    int min;
    scanf("%d", &min);
    if (min <= 500){
        printf("%d", 350);
    } else {
        printf("%d", 350 + (2 * (min - 500)));
    }
    return 0;
}
