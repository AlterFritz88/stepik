#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[40] = "Hello, ";
    char str2[20];
    scanf("%s", str2);
    strcat(str1, str2);
    printf("%s", str1);


    return 0;
}

