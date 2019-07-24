#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);

    for (int i = 0; i < 100; i++){
        if (buff[i] == 10){
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}

