#include <stdio.h>

int main() {
    char mark;
    int a, b;
    scanf("%d %d %c", &a, &b, &mark);

    switch (mark){
        case '+': printf("%.2lf", (double)a + b);
            break;
        case '-': printf("%.2lf", (double)a - b);
            break;
        case '*': printf("%.2lf", (double)a * b);
            break;
        case '/':
            switch (b){
                case 0: printf("ERROR!"); break;
                default: printf("%.2lf", (double)a / b);
                    break;
            } break;

        default: printf("ERROR!"); break;
    }
    return 0;
}
