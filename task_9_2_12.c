#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);
    char string[100];
    int len = 0, slovo = 0;
    char first;

    for (int i = 0; i < 99; i++){

        if (slovo == 0 && buff[i] != ' '){
            slovo = 1;
            first = buff[i];
            string[len] = buff[i];
            len++;
            continue;
        }
        if ((slovo == 1 && buff[i] != ' ') && (slovo == 1 && buff[i] != 10) && (slovo == 1 && buff[i] != 0)){
            string[len] = buff[i];
            len++;
            continue;
        }
        if ((slovo == 1 && buff[i] == ' ') || (slovo == 1 && buff[i] == 10) || (slovo == 1 && buff[i] == 0)){
            slovo = 0;

            if (first == buff[i-1]){
                for (int j = 0; j < len; j++){
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            len = 0;
        }
        if (buff[i] == 10 || buff[i] == 0){
            return 0;
        }
    }
    return 0;
}

