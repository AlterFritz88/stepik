#include <stdio.h>

int main() {
    int n;
    double molecule = 3.0e-23;
    double tire = 0.05;
    double mass_cup = 249.5;

    double molecule_per_cup = mass_cup / molecule ;
    double tire_per_cup = mass_cup / tire;

    scanf("%d", &n);
    printf("%d %.3e", (int)tire_per_cup*n, molecule_per_cup*n);

    return 0;
}