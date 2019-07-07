#include <stdio.h>

int main() {
    char mark;
    int a, b;
    scanf("%c %d %d", &mark, &a, &b);
    switch (mark){
        case '+': printf("%.2lf", (double)a + b);
            break;
        case '-': printf("%.2lf", (double)a - b);
            break;
        case '*': printf("%.2lf", (double)a * b);
            break;
        case '/': printf("%.2lf", (double)a / b);
            break;
        default: printf("ERROR!"); break;
    }
    return 0;
}

