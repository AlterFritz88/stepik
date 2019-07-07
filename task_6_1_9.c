#include <stdio.h>

int main() {
    int day, month, days_plus;
    scanf("%d %d", &month, &day);
    switch (month) {
        case 1 : days_plus = 0;
            break;
        case 2 : days_plus = 31; break;
        case 3 : days_plus = 59; break;
        case 4 : days_plus = 90; break;
        case 5 : days_plus = 120; break;
        case 6 : days_plus = 151; break;
        case 7 : days_plus = 181; break;
        case 8 : days_plus = 212; break;
        case 9 : days_plus = 243; break;
        case 10 : days_plus = 273; break;
        case 11 : days_plus = 304; break;
        case 12 : days_plus = 334; break;
        default:
            break;
    }
    printf("%d", days_plus + day);
    return 0;
}
