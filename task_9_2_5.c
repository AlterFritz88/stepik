#include <stdio.h>
#include <math.h>

int main() {
    char buff[100];
    int start = 0, count = 0, dec = 0;
    fgets(buff, 99, stdin);
    for (int i = 100; i >=  0; i--){
        if (start == 1){
            dec += (int)pow((double)2 , count) * (buff[i] % 48);
            count++;
        }

        if (buff[i] == 10){
            start = 1;

        }

    }
    printf("%d", dec);
    return 0;
}

