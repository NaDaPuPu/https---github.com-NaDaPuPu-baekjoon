#include <iostream>

using namespace std;

int t, n, k;
int array[100];

int main() {
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int result, sum = 0;
        cin >> n >> k;
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
            if (j >= 1)
                sum += array[j - 1];
            
            if ((array[j] / sum) > k)
            {
                
            }
            
        }
        
    }
    

    return 0;
}