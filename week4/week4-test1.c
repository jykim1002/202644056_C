#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int answer;
    int num;
    int total;

    total = 0;

    srand(time(NULL));

    answer = rand() % 100 + 1;

    printf("1부터 100사이에 숫자를 맞춰보세요!");
    
    while(1)
    {
        printf("숫자 입력: ");
        scanf("%d", &num);
        total++;

        if(num > answer)
        {
            printf("더 작은 수입니다.\n");
        }
        else if(num < answer) {
            printf("더 큰 수 입니다.\n");
        }
        else {
            printf("정답입니다. %d회만에 맞췄습니다.\n", total);
            break;
        }
    }
    return 0;
}