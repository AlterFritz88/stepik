#include <stdio.h>
#include <string.h>

int main() {
    char str1[25];
    char str2[25];
    scanf("%s", str1);
    scanf("%s", str2);
    int len_1 = strlen(str1);
    int len_2 = strlen(str2);
    if (((str1[len_1-1] - 32) == str2[0]) || ((str2[len_2-1] - 32) == str1[0])){
        printf("yes");
    } else printf("no");

    return 0;
}

