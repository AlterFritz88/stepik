#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    switch (k){
        case 1:{
         int d1;
         scanf("%d", &d1);
         printf("%d", d1);
            break;
        }
        case 2:{
            int d1, d2;
            scanf("%1d%1d", &d1, &d2);
            printf("%d", d1 * d2);
            break;
        }
        case 3:{
            int d1, d2, d3;
            scanf("%1d%1d%1d", &d1, &d2, &d3);
            printf("%d", d1 * d2 * d3);
            break;
        }
        case 4:{
            int d1, d2, d3, d4;
            scanf("%1d%1d%1d%1d", &d1, &d2, &d3, &d4);
            printf("%d", d1 * d2 * d3 * d4);
            break;
        }
        default:
            break;
    }
    return 0;
}

