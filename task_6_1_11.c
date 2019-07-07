#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int k;
    scanf("%d", &k);
    if (k > 10 && k < 19){
        printf("Мне %d лет", k);
        return 0;
    }
    switch (k%10){
        case 1:{
            printf("Мне %d год", k);
            break;
        }
        case 2:{
            printf("Мне %d года", k);
            break;
        }
        case 3:{
            printf("Мне %d года", k);
            break;
        }
        case 4:{
            printf("Мне %d года", k);
            break;
        }
        default: printf("Мне %d лет", k);
    }
    return 0;
}

