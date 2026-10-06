#include <stdio.h>

void starinout(int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n; i>0; i--) {
        for(int j=0; j<i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    starinout(n);
}