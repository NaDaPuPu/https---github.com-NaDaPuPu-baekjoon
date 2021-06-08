#include <stdio.h>

int main(void) {
    int num;
    int max = -1000000;
    int min = 1000000;

    scanf("%d", &num);
    int numArr[num];
    
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &numArr[i]);
        if(numArr[i] > max) {
            max = numArr[i];
        }

        if(numArr[i] < min) {
            min = numArr[i]; 
        }
    }
    printf("%d %d", min, max);
}