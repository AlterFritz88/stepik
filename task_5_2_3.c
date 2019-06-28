#include <stdio.h>
#include <math.h>

int main() {
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    n1 = (int)fabs(n1);
    n2 = (int)fabs(n2);
    n3 = (int)fabs(n3);
    n4 = (int)fabs(n4);
    n5 = (int)fabs(n5);

    int r1 = (n1%2) - ((n1+1)%2);
    int r2 = (n2%2) - ((n2+1)%2);
    int r3 = (n3%2) - ((n3+1)%2);
    int r4 = (n4%2) - ((n4+1)%2);
    int r5 = (n5%2) - ((n5+1)%2);



    printf("%d", r1 + r2 + r3 + r4 + r5);
    return 0;
}