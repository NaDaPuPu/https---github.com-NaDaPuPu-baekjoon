#include <stdio.h>

int main(void) {
    int num, scnum;
    char numArr[num];
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int numArr[1000];
        int sum = 0;
        float avg;
        scanf("%d", &scnum);
        for (int j = 0; j < scnum; j++)
        {
            scanf("%d", &numArr[j]);
            sum += numArr[j];
        }
        avg = sum / scnum;

        int count = 0;
        for (int j = 0; j < scnum; j++)
        {
            if (avg < numArr[j])
            {
                count++;
            }
        }
        printf("%.3f%%\n", (float)count * 100 / scnum);
    }
    return 0;
}