#include <stdio.h>

int main() {
    int start, end;
    double tarif;
    scanf("%d %d %lf", &start, &end, &tarif);
    printf("%.2lf", (end-start)*tarif);
    return 0;
}