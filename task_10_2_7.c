#include <stdio.h>

int main(void){
    int a1 = 30;
    int a2 = 42;
    int * p_1 = &a1;
    int * p_2 = &a2;
    int c = 14;
    int d = 88;
    * p_1 = c;
    * p_2 = d;
    printf("%lf",  *p_dbl);
}