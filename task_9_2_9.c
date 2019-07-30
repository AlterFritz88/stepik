#include <stdio.h>

int main() {
    char buff[100];
    int yes = 0, has_end = 0;
    fgets(buff, 99, stdin);
    for (int i = 0; i < 99; i++){
        if (buff[i] == 10) break;
        if (buff[i] == '/' && buff[i+1] == '*'){
            yes = 1;
            for (int j = i+2; j < 99; j++){
                if (buff[j] == '*' && buff[j+1] == '/'){
                    has_end = 1;
                    i += 2;
                    break;
                }
            }
            if (has_end == 0){
                yes = 0;

            }


        }
        if (buff[i] == '*' && buff[i+1] == '/' && yes == 1){
            yes = 0;
            i += 1;
            has_end = 0;
            continue;
        }
        if (yes == 0){
            printf("%c", buff[i]);
        }

    }
    return 0;
}

