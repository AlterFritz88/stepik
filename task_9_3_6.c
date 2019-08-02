#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];
    int index_1, index_2;
    fgets(str1, 49, stdin);
    fgets(str2, 49, stdin);

    for (int i = 0; i < 50; i++){
        if (str1[i] == 10 && str2[i] == 10) break;
        if (str1[i] < 97) index_1 = str1[i] + 32;
        else index_1 = str1[i];
        if (str2[i] < 97) index_2 = str2[i] + 32;
        else index_2 = str2[i];
        if (index_1 != index_2){
            printf("no");
            return 0;
        }
    }
    printf("yes");
    return 0;
}

