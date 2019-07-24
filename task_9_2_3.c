#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);
    int count = 1;
    for (int i = 0; i < 100; i++){

        if (buff[i] == 10){
            printf("%d", count);
            return 0;
        }
        if (buff[i-1] == ' ' && buff[i] != ' ') count++;

    }
    return 0;
}

