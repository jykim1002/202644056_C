#include <stdio.h> /*별 출력하기*/

int n;

void insert(int n) {
    for(int i=0; i<n; i++) {
        for(int j=1; j<=i+1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    scanf("%d", &n);
    insert(n);

    return 0;
}