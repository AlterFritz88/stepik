#include <stdio.h>

int main() {
    int start, stop, count = 0;
    scanf("%d %d", &start, &stop);
    if (start < 1){
        start = 1;
    }
    for (start; start <= stop; start++){
        printf("%d ", start);
        count++;
    }
    printf("\n%d", count);
    return 0;
}


