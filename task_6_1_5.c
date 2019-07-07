#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int n;
    scanf("%d", &n);
    if (n % 2 == 1){
        printf("Любит");
    } else {
        printf("Не любит");
    }

    return 0;
}

