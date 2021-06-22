#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, result = 0;
    
    cin >> n;
    int start = n - 9 * log10(n);
    
    if (start >= 1)
    {
        for (int i = start; i < n; i++)
        {
            int sum = i;
            for (int j = i; j > 0; j /= 10)
            {
                sum += j % 10;
            }
            
            if (sum == n)
            {
                result = i;
                break;
            }
        }

    }
    
    cout << result;
}