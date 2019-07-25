#include <stdio.h>

int main() {
    char sym, temp;
    scanf("%c", &sym);
    scanf("%c", &temp);
    char buff[100];
    fgets(buff, 99, stdin);
    for (int i = 0; i < 100; i++){
        if (buff[i] == 10){
            printf("%d", -1);
            return 0;
        }
        if (buff[i] == sym){
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}

