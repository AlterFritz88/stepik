#include <stdio.h>

void char_cesar(char * ch, int shift){
    char new;
    if ((*ch + shift) % 123 >= 97) new = (*ch + shift) % 123;
    else new = (char)(((int)*ch + shift) % 123) + 97;
    printf("%d ", new);
    *ch = new;
}


int main(){
    char y = 'y';
    int  a = 1;
    char_cesar(&y, a);
    printf("%c", y);
    return 0;
}