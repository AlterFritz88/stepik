#include <stdio.h>

void char_register(char * ch, int fl){
    if (*ch > 64 && *ch < 91 && fl == 0) *ch += 32;
    if (*ch > 97 && *ch < 123 && fl == 1) *ch -= 32;
}

int main(){
    int a = 1;
    char y = 'y';
    char_register(&y, a);
    printf("%c", y);
    return 0;
}

