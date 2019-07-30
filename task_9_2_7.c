#include <stdio.h>

int main() {
    char buff_1[100];
    fgets(buff_1, 99, stdin);
    char buff_2[100];
    fgets(buff_2, 99, stdin);
    int count = 0;
    for (int i = 0; i < 14; i++){
        if (buff_1[i] == 10 || buff_2[i] == 10){
            printf("%d", count);
            return 0;
        }
        if (buff_1[i] != buff_2[i]){
            count++;
        }
    }
    return 0;
}
