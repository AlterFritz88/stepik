#include <stdio.h>
#include <limits.h>

int main(void){
    int a1 = 14;
    int a2 = 88;
    int a3 = 2;
    int * p_a = &a1;
    int * p_b = &a2;
    int * p_c = &a3;
    int min = INT_MAX;

    int arr[3] = {*p_a, *p_b, *p_c};
    for (int i = 0; i < 3; i++){
        if (arr[i] < min) min = arr[i];
    }
    *p_a = min;
    *p_b = min;
    *p_c = min;



    printf("%d %d %d",  a1, a2, a3);
}



