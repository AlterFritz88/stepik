#include <stdio.h>

int main() {
    int n, mark, point;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        mark = 0;
        point = i;
        for (int j = 0; j < n; j++){
            if (point == 1){
                mark = 1;
            }
            printf("%d ", point);
            if (mark == 0){
                point--;
            } else point++;
        }
        printf("\n");
    }
    return 0;
}

