#include <stdio.h>

int main() {
    char buff[100];
    fgets(buff, 99, stdin);
    int count_points = 0, end=0;

    for (int i = 0; i < 99; i++){
        if (buff[i] == 10 || buff[i] == 0){
            end = i - 1;
            break;
        }
    }

    if (buff[end] == '.' || buff[0] == '.') {
        printf("error");
        return 0;
    }

    if((buff[0] == '+' || buff[0] == '-') && buff[1] == '.'){
        printf("error");
        return 0;
    }

    int start = 0;
    if(buff[0] == '+' || buff[0] == '-') start = 1;

    for (int i = start; i <= end; i++){
        printf("%d", buff[i]);
        if (buff[i] == '.') {
            count_points++;
            if (count_points > 1){
                printf("error");
                return 0;
            }
            continue;
        }
        if (buff[i] < 48 || buff[i] > 57){
            printf("error");
            return 0;
        }
    }
    if (count_points == 0){
        printf("int");
    } else printf("float");

    return 0;
}

