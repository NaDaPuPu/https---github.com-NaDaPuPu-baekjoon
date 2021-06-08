#include <iostream>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int n, howMuchFive;
    int temp, result;

    cin >> n;
    howMuchFive = n / 5;

    while (howMuchFive >= 0)
    {
        temp = 0;
        result = 0;
        
        if (howMuchFive > 0)
        {
            temp = n - (howMuchFive * 5);
            result = howMuchFive;
        }
        else temp = n;

        result += temp / 3;
        temp %= 3;
        
        if (temp == 0)
        {
            break;
        }

        howMuchFive--;
    }

    if (temp != 0)
    {
        result = -1;
    }

    cout << result << endl;
}