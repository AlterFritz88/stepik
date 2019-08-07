#include <stdio.h>

int binary_search(int arr[], int n, int arg){
    int first = 0;
    int last = n;
    int res = -1;

    while (first <= last) {
        int mid = (last + first) / 2;

        if (arr[mid] < arg)
            first = mid + 1;
        else if (arr[mid] == arg) {

            return mid;


        }
        else
            last = mid - 1;
    }


    return res;
}

int main(){
    int a[5] = {-93, 10, 12, 22, 75};
    int n = 5, arg = 22;
    int res = binary_search(a, n, arg);
    printf("%d", res);

}
