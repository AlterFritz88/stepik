#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");
    int age;
    scanf("%d", &age);
    if (age <= 6){
        printf("дошкольник");
        return 0;
    }
    if (age <= 18){
        printf("школьник");
        return 0;
    }
    if (age <= 59){
        printf("рабочий");
        return 0;
    }
    printf("пенсионер");
    return 0;
}

