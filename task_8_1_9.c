#include <stdio.h>

int main() {
    int n, med, temp, osob;
    scanf("%d", &n);
    med = n / 2;
    int array_1[med], array_2[med];
    int index_1 = 0, index_2 = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &temp);
        if (n % 2 == 1 && i == med){
            osob = temp;
            continue;
        }
        if (i < med){
            array_2[index_2] = temp;
            index_2++;
        } else{
            array_1[index_1] = temp;
            index_1++;
        }
    }

    for (int i = 0; i < med; i++){
        printf("%d ", array_1[i]);
    }

    if (n % 2 == 1){
        printf("%d ", osob);
    }

    for (int i = 0; i < med; i++){
        printf("%d ", array_2[i]);
    }

    return 0;
}
