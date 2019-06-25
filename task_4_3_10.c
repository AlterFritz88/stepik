#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int down, up;
    scanf("%d %d", &down, &up);
    int rand_digit = down + rand()%(up - down + 1);
    printf("%d",rand_digit);
    return 0;
}