#include <stdio.h>

void number(int n) {
    if(n == 0) {
        return;
    }
    number(n-1);
    printf("%d\n", n);
}

int main(void) {
    int n;
    scanf("%d", &n);
    number(n);
    return 0;
}