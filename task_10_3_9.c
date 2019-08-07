#include <stdio.h>
#include <math.h>
int abs_arr(int arr[], int n){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < 0) count++;
    }

    for (int i = 0; i < n; i++){
        if (arr[i] < 0) arr[i] = fabs(arr[i]);
    }


    return count;
}


int main(){
    int  a[5] = {1, -6, -2, -5, 5};
    int n = 5;
    int c;
    c = abs_arr(a, n);
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    return 0;
}


