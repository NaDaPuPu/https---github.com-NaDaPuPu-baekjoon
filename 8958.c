#include <stdio.h>

int main(void) {
    int num;
    char ox[80];
    scanf("%d", &num);
    int numArr[num];

    for (int i = 0; i < num; i++)
    {
        numArr[i] = 0;
        scanf("%s", ox);
        int j = 0, conti = 1;
        while (ox[j] != NULL)
        {
            if(ox[j] == 'O') {
                numArr[i] += conti;
                conti += 1;
            } else {
                conti = 1;
            }
            j++;
        }
    }

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", numArr[i]);
    }
}