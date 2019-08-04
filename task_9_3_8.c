#include <stdio.h>
#include <string.h>

int main() {
    char st1[50];
    scanf("%s", st1);
    char st2[50];
    scanf("%s", st2);
    int yes = 0;
    for (int i = 0; i < strlen(st2); i++){
        yes = 0;
        for (int j = 0; j < strlen(st1); j++){
            if (st2[i] == st1[j]){
                st1[j] = ' ';
                yes = 1;
                break;
            }
        }
        if (yes == 0) {
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}

