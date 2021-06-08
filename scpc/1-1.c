#include <stdio.h>

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

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N - 1; j++)
            {
                if (A[j] > A[j + 1])
                {
                    temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
                
                if (B[j] > B[j + 1])
                {
                    temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

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