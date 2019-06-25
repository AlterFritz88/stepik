#include <stdio.h>
int main(void){
    int a, b, c, d, e, f, h;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &h);


    double res = (double)a / (b * ((double)c / ((double)d * e / (f * h))));
    printf("%.2f", res);

    return 0;
}