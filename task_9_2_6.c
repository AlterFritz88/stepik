#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);
    for (int i = 0; i < 100; i++) {

        if (buff[i] == 10) {
            return 0;
        } else {
            if (buff[i] != ' '){
                printf("%c", buff[i]);
                continue;
            }
            if (buff[i] == ' ' && buff[i-1] != ' '){
                printf("%c", buff[i]);
            }

        }

    }
    return 0;
}
