#include <stdio.h>

int main()
{
    int a = 5;      //5로 초기화
    int b = 3;      //3으로 초기화
    int result;

    result = a * b + (++a);     //이항 연산자 *와 증가 연산자 ++ 사용
    printf("결과 = %d\n", result);

    int c = 6; //6으로 초기화
    int d = 4; //4로 초기화

    result = c * d + (c--);     //이항 연산자 *와 감소 연산자 -- 사용
    printf("결과 = %d\n", result);

    return 0;
}