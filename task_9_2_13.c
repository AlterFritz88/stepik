#include <stdio.h>

int main() {
    int count = 0;
    char buff[100], slovo[100];
    fgets(buff, 99, stdin);

    for (int i = 0; i < 99; i++) {
        if (buff[i] != ' '){

            slovo[count] = buff[i];
            count++;
        }
        if (buff[i] == ' ' || buff[i] == 10 || buff[i] == 0){
            for (int j = count - 1; j >= 0; j--){
                if (slovo[j] == '\n' || slovo[j] == 0){
                    int lolo = 1;
                } else printf("%c", slovo[j]);
            }
            if (slovo[0] == 10 || slovo[0] == 0) {
                return 0;
            }
            printf(" ");
            count = 0;

        }


    }
    return 0;
}

