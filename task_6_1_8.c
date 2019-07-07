#include <stdio.h>
int main(void){

    int age, height, weight;
    char sex;
    double bov_m, bov_f;

    scanf("%c %d %d %d", &sex, &age, &height, &weight);

    switch (sex) {
        case 'm' : {
            printf("|  BMR  |\n");
            printf("|%7.2f|\n", 10*weight + 6.25*height - 5*age + 5);
            break;
        }
        case 'f' : {
            printf("|  BMR  |\n");
            printf("|%7.2f|\n", 10*weight + 6.25*height - 5*age - 161);
            break;
        }
        default: printf("ERROR!");
    }


    return 0;
}

