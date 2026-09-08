#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
    int powerConsumed, CostPerkW;

    printf("사용한 전력량(kW)을 입력하세요: ");
    scanf("%d", &powerConsumed);
    printf("전력 요금(1kW당 비용)을 입력하세요: ");
    scanf("%d", &CostPerkW);

    long long totalCost = (long long)powerConsumed * CostPerkW;

    printf("전기 요금: %lld\n", totalCost);

    return 0;
}
