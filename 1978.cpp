#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, input, result = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> input;
        if (input != 1) {
            for (int j = 2; j <= input; j++)
            {
                if (input % j == 0 && input != j)
                {
                    break;
                } 
                
                if (input == j) {
                    result++;
                }
            }
        }
    }
    
    cout << result << endl;
}