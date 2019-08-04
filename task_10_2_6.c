#include <stdio.h>

int main(void){
    int a1 = 30;
    int a2 = 42;
    double d;
    int * p_1 = &a1;
    int * p_2 = &a2;
    double * p_dbl;
    *p_dbl = (*p_1 / (double)*p_2);
    printf("%lf",  *p_dbl);
}

