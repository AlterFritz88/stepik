#include <stdio.h>

int main() {
    int n, middle, fake;
    scanf("%d", &n);

    middle = n / 2;

    int array_1[middle];
    int array_2[middle];

    for (int i = 0; i < middle; i++){
        scanf("%d", &array_1[i]);
    }

    if (n % 2 == 1){
        scanf("%d", &fake);
    }

    for (int i = middle - 1; i >= 0; i--){
        scanf("%d", &array_2[i]);
    }

    for (int i = 0; i < middle; i++){
        //printf("%d %d", array_1[i], array_1[i]);
        if (array_1[i] != array_2[i]){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}

