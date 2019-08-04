#include<stdio.h>
int sequence_multipliers(int k){
    int i = 1, prod = 0;
    while (prod <= k){
        prod = i * (i+1) * (i+2);
        if (prod == k) return i;
        if (prod > k) return -1;
        i++;
    }
}
int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sequence_multipliers(n));
    return 0;
}