#include <stdio.h>

void swap(int * a, int * b){
    int  temp = * b;
    *b = * a;
    *a = temp;

}

int main(){
    int a = 5, b = 10;
    swap(&a, &b);
    printf("%d %d", a, b);
    return 0;
}
