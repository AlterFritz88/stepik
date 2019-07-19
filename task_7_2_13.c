#include <stdio.h>
#include <math.h>

long factorial(int n)
{
    int c;
    long result = 1;

    for (c = 1; c <= n; c++)
        result = result * c;

    return result;
}


int main() {
    double e;
    scanf("%lf", &e);
    double exp = 1;
    int i = 1;

    while ((1./(factorial(i))) > e){
        exp += 1./(factorial(i));
        i++;
    }
    exp += 1./(factorial(i));

    printf("%.8lf", exp);
    return 0;
}

