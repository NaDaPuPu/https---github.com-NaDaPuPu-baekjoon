#include <stdio.h>
#include <stdlib.h>

int n, k, val;
int coin[100];
int memo[100001];

int get_coin(int k, int n) {
    if(memo[k] || k == 0)   // 이미 계산했다면
        return memo[k];     // 바로 리턴
    int minimum = 100001;

    for (int i = 0; i < n; i++)     // 모든 coin 참조
    {
        if (k - coin[i] >= 0)       // 코인의 가치가 k보다 작거나 같으면
        {
            val = get_coin(k - coin[i], n) + 1;     // N[k - coin] + 1 : coin이 무조건 포함될 때, 필요한 코인의 총 갯수
            if (val < minimum) {    // 최솟값 구하기
                minimum = val;
            }
        }
    }
    
    return memo[k] = minimum;       // 최솟값 계산 후 출력
}

int main(void) {
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
        scanf("%d", &coin[i]);
    
    int num = get_coin(k, n);
    if (num == 100001)
        printf("-1");
    else
        printf("%d", num);
}