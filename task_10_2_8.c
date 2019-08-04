#include <stdio.h>

int main(void){
    int a1 = 14;
    int a2 = 88;
    int * p_1 = &a1;
    int * p_2 = &a2;
    int temp;
    temp = *p_1;
    *p_1 = *p_2;
    *p_2 = temp;



    printf("%d %d",  *p_1, *p_2);
}

