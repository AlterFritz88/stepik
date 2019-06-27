#include <stdio.h>
#include <math.h>

int main() {
    int power;
    long gig_2 = (long)pow(2, 30);
    long gig_10 = (long)pow(10, 9);

    scanf("%d", &power);

    printf("%ld",   (gig_2*power - gig_10*power));

    return 0;
}