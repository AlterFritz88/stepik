#include <stdio.h>

#include <limits.h>

int minmax(int arr[], int n, int fl){

    int ans;
    if (fl == 0) {
        ans = INT_MAX;
        for (int i = 0; i < n; i++){
            if (arr[i] < ans) ans = arr[i];
        }
    }
    else {
        ans = INT_MIN;
        for (int i = 0; i < n; i++){
            if (arr[i] > ans) ans = arr[i];
        }
    }

    return ans;
}

int main(){
    int  a[5] = {1, -6, -2, -5, 5};
    int n = 5;
    int fl = 0, number;
    number = minmax(a, n, fl);
    printf("%d", number);
    return 0;
}
