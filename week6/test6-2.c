#include <stdio.h> /*별 거꾸로 출력하기*/

void reverse(int n) {
    for(int i=n; i>0; i--) { //행
        for(int j=0; j<i; j++) {    //열
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    reverse(n);

    return 0;
}