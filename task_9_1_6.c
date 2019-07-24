#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);
    if (letter >= 48 && letter <= 57){
        printf("digit");
        return 0;
    }
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122)){
        printf("en");
        return 0;
    }
    printf("error");
    return 0;
}
