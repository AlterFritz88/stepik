#include <stdio.h>
void square(int x, char c){
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            printf("%c", c);
        }
        printf("\n");
    }
}
int main(){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    square(n, c);
    return 0;
}

