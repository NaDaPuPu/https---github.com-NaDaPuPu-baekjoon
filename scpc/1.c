#include <stdio.h>

int main(void)
{
    int T, test_case;

	setbuf(stdout, NULL);

	scanf("%d", &T);
    int Answer[T];

    int i, j, temp, N[T], K[T];

    for(test_case = 0; test_case < T; test_case++)
	{
        scanf("%d %d", &N[test_case], &K[test_case]);
        int A[T][N[test_case]], B[T][N[test_case]];
        for (i = 0; i < N[test_case]; i++)
        {
            scanf("%d", &A[test_case][i]);
        }

        for (i = 0; i < N[test_case]; i++)
        {
            scanf("%d", &B[test_case][i]);
        }

        for (i = 0; i < N[test_case]; i++)
        {
            for (j = 0; j < N[test_case] - 1; j++)
            {
                if (A[test_case][j] > A[test_case][j + 1])
                {
                    temp = A[test_case][j];
                    A[test_case][j] = A[test_case][j + 1];
                    A[test_case][j + 1] = temp;
                }
                
                if (B[test_case][j] > B[test_case][j + 1])
                {
                    temp = B[test_case][j];
                    B[test_case][j] = B[test_case][j + 1];
                    B[test_case][j + 1] = temp;
                }
            }
        }

        for (i = 0; i < K[test_case]; i++)
        {
            if (A[test_case][i] + B[test_case][K[test_case] - i - 1] > Answer[test_case])
            {
                Answer[test_case] = A[test_case][i] + B[test_case][K[test_case] - i - 1];
            }
        }
        
	}

	for(test_case = 0; test_case < T; test_case++)
	{
		printf("Case #%d\n", test_case+1);
	        	printf("%d\n", Answer[test_case]);
	}

	return 0;
}