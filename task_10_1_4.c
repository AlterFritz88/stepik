#include <stdio.h>
#include <limits.h>
int min(int a, int b, int c){
    int min = INT_MAX;
    int arr[3] = {a, b, c};
    for (int i = 0; i < 3; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;

}
int main(void){
// напишите программу, использующую функцию min
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(a, b, c));
    return 0;
}

