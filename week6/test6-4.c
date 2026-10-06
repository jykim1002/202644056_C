#include <stdio.h>

void starinout(int n) {
    for(int i = 1; i <= 2 * n; i++) {
        int count = (i <= n) ? i : 2 * n - i;
        for(int j = 0; j < count; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    starinout(n);
}
