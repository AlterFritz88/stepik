#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    int rand_digit = rand()%n;
    printf("%d",rand_digit);
    return 0;
}