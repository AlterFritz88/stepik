#include <stdio.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    char temp;
    char slovo[n];
    for (int i = 0; i < (n * 2) ; i++){
        if (i % 2 == 1) {
            scanf("%c", &temp);
            slovo[count] = temp;
            count++;
        } else scanf("%c", &temp);
    }


    for (int i = 97; i < 123; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            if (slovo[j] == i || slovo[j] == (i - 32)){
                sum++;
            }
        }
        printf("%d ", sum);
    }

    return 0;
}

