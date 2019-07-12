#include <stdio.h>

int main() {
    int d, m, limit;
    scanf("%d %d", &d, &m);
    if (m > 12 || m < 1 || d < 1){
        printf("error");
        return 0;
    }
    switch (m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: limit = 31;
            break;
        case 2: limit = 29;
            break;
        default: limit = 30;
            break;
    }
    if (d > limit){
        printf("error");
    } else {
        printf("correct");
    }
    return 0;
}

