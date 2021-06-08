#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    
    if (num1 > num2)
        return 1;

    return 0;
}

int Answer;

int main(void)
{
	int T, test_case;
    
	setbuf(stdout, NULL);

	scanf("%d", &T);
	for(test_case = 0; test_case < T; test_case++)
	{
        int i, j, temp, N, K;
        scanf("%d %d", &N, &K);
        int A[N], B[N];
        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (i = 0; i < N; i++)
        {
            scanf("%d", &B[i]);
        }

        qsort(A, sizeof(A) / sizeof(int), sizeof(int), compare);
        qsort(B, sizeof(B) / sizeof(int), sizeof(int), compare);

        Answer = 0;
        for (i = 0; i < K; i++)
        {
            int sum = A[i] + B[K - i - 1];
            if (sum > Answer)
            {
                Answer = sum;
            }
            
        }
        
		printf("Case #%d\n", test_case+1);
	        	printf("%d\n", Answer);
        
	}

	return 0;
}