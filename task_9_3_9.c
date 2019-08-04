#include <stdio.h>

int main() {
    char *morse[36] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
    char buff[50];
    fgets(buff, 49, stdin);
    for (int i = 0; i < 50; i++){
        if (buff[i] == 10 || buff[i] == 0) break;
        if (buff[i] == ' '){
            printf("|:_..._:");
        } else {
            if (buff[i] > 47 && buff[i] < 58){
                printf("%s", morse[buff[i] - 48 + 26]);
            } else {
                if (buff[i] > 96 && buff[i] < 123) {
                    printf("%s", morse[buff[i] - 97]);
                } else printf("%s", morse[buff[i] - 65]);
            }
        }

        printf("|");
    }

    return 0;
}

