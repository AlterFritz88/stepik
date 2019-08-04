#include <stdio.h>

int main(void){
    int a1 = 1;
    int a2 = 2;
    int * p_1 = &a1;
    int * p_2 = &a2;
    printf("%d", *p_2 + *p_1);
}

