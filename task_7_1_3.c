#include <stdio.h>

int main() {
    int start, stop;
    scanf("%d %d", &start, &stop);
    if (start < 1){
        start = 1;
    }
    for (start; start <= stop; start++){
        printf("%d ", start);
    }
    return 0;
}

