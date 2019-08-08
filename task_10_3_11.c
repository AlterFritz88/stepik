#include <stdlib.h>
#include <stdio.h>
int comp1(const void *, const void *);
int comp2(const void *, const void *);
void sort_arr(int arr[], int n, int fl){
    if (fl == 0) qsort(arr, n, sizeof(int), comp2);
    else  qsort(arr, n, sizeof(int), comp1);

}

int comp1(const void *i, const void *j)
{
    return *(int *)j - *(int *)i ;

}

int comp2(const void *i, const void *j)
{
    return  *(int *)i - *(int *)j  ;

}


int main (){
    int a[] = {1, 3, 34, -2, 2, 2, 90, 0};
    sort_arr(a, 8, 0);
    for (int i = 0; i < 8; i++){
        printf("%d ", a[i]);
    }
    return 0;
}