#include <stdio.h>
#include <stdlib.h>

struct ConTime {
    int time_s;
    int time_e;
};

int static compare (const void* first, const void* second) {
    struct ConTime* ptrFirst = (struct ConTime*)first;
    struct ConTime* ptrSecond = (struct ConTime*)second;

    if (ptrFirst -> time_e < ptrSecond ->time_e || ptrFirst -> time_e == ptrSecond ->time_e && ptrFirst -> time_s < ptrSecond -> time_s) return -1;
    else if (ptrFirst -> time_e > ptrSecond ->time_e || ptrFirst -> time_e == ptrSecond ->time_e && ptrFirst -> time_s > ptrSecond -> time_s) return 1;
    else return 0;
}

int main(void) {
    int n, num = 0, preTime = 0;
    scanf("%d", &n);
    struct ConTime c[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &c[i].time_s, &c[i].time_e);
    }
    
    qsort(c, n, sizeof(struct ConTime), compare);

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || preTime <= c[i].time_s)
        {
            preTime = c[i].time_e;
            num++;
        }
    }
    printf("%d", num);
}