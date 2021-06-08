// Greedy 풀이 : 가능한 것 중 가장 큰 숫자를 선택

#include <stdio.h>

int main(void) {
    int n, k;
    int q[100];
    int c_num[100];
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &q[i]);
    }
    
    int i, part = 0, index = 0, l_num;

    while (index != n)
    {
        index = 0;
        l_num = 0;
        for (i = 0; i < n; i++)
        {
            if(l_num < q[i]) {
                l_num = q[i];
                q[i] = 0;
            }

            if (q[i] == 0)
            {
                index++;
            }
        }
        part++;
    }
    
    if (part <= k)
        printf("YES");
    else
        printf("NO");
    
    return 0;
}