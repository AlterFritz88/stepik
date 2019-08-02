#include <stdio.h>
#include <string.h>

int main() {
    char num[10];
    scanf("%s", num);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++){
        sum1 += (num[i] - 48);
    }
    for (int i = 3; i <= 5; i++){
        sum2 += (num[i] - 48);
    }
    if (sum1 == sum2){
        printf("yes");
    } else printf("no");
    return 0;
}

