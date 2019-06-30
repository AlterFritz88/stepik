#include <stdio.h>
#include <math.h>

int main() {
    int day;
    scanf("%d", &day);
    printf("%d",  (day+2) % 7) ;
    return 0;
}