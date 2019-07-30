#include <stdio.h>
#include <math.h>

int main() {
    int n, x = 0, y = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++){
        char buff[100];
        int add = 0;
        fgets(buff, 99, stdin);

        int start = 0, count = 0;

        for (int j = 0; j < 100; j++){
            if (buff[j] == 10) break;
            if (buff[j] == ' ') {start = j; continue;}
            if (start != 0){
                count++;
            }
        }

        char number[count];

        int power = 0;
        for (int j = start + count; j > start; j--){
            //printf("%d\n", buff[j]);
            add += (buff[j] % 48) * (int)pow(10, power);
            power ++;
        }

        switch (buff[0]){
            case 'N':   y += add; break;
            case 'S':   y -= add; break;
            case 'E':   x += add; break;
            case 'W':   x -= add; break;
        }

    }
    printf("%d %d", x, y);
    return 0;
}

