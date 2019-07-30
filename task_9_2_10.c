#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);
    char buff_2[100];
    int end = 0, counter = 0, counter_buff = 0;
    for (int i = 100; i >= 0; i--){
        if (buff[i] == 10) {
            end = 1;
            i--;
        }
        if (counter == 3){
            counter = 0;
            buff_2[counter_buff] = ' ';
            counter_buff++;

        }
        if (end == 1){
            buff_2[counter_buff] = buff[i];
            counter++;
            counter_buff++;
        }
    }
    for (int i = counter_buff - 1; i >= 0; i--){
        printf("%c", buff_2[i]);
    }
    return 0;
}

